cmake_minimum_required (VERSION 3.10)
project ("cc_ublox_cc_tools_qt_plugin")

# Build options:
option (OPT_WARN_AS_ERR "Treat warnings as errors" ON)
option (OPT_USE_CCACHE "Use ccache" OFF)
option (OPT_WITH_DEFAULT_SANITIZERS "Build with sanitizers" OFF)
option (OPT_INSTALL_DEFAULT_CONFIG "Install default plugin configuration" ON)

# Configuration variables:
# OPT_QT_MAJOR_VERSION - The major Qt version, defaults to 5
# OPT_CCACHE_EXECUTABLE - Custom ccache executable

######################################################################

if ("${OPT_QT_MAJOR_VERSION}" STREQUAL "")
    set(OPT_QT_MAJOR_VERSION 5)
endif()

if ("${CMAKE_CXX_STANDARD}" STREQUAL "")
    set(CMAKE_CXX_STANDARD 17)
endif()

if ("${CMAKE_CXX_STANDARD}" VERSION_LESS "17")
    message (FATAL_ERROR "Use C++17 or later (instead of C++${CMAKE_CXX_STANDARD}) to compile this project.")
endif()

find_package(LibComms REQUIRED)
find_package(cc_ublox REQUIRED)
find_package(cc_tools_qt REQUIRED)
find_package(Qt${OPT_QT_MAJOR_VERSION} REQUIRED COMPONENTS Widgets Core)

set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_AUTORCC ON)

set (extra_opts)
if (OPT_WARN_AS_ERR)
    list(APPEND extra_opts WARN_AS_ERR)
endif()

if (OPT_USE_CCACHE)
    list(APPEND extra_opts USE_CCACHE)
    if (NOT "${OPT_CCACHE_EXECUTABLE}" STREQUAL "")
        list(APPEND extra_opts CCACHE_EXECUTABLE "${OPT_CCACHE_EXECUTABLE}")
    endif()
endif()

if (OPT_WITH_DEFAULT_SANITIZERS)
    list(APPEND extra_opts DEFAULT_SANITIZERS)
endif()

include(${LibComms_DIR}/CC_Compile.cmake)
cc_compile(${extra_opts})
cc_msvc_force_warn_opt(/W4)

include(GNUInstallDirs)

set (CORE_LIB_NAME "cc_tools_qt_plugin_cc_ublox_protocol_core")

######################################################################

function (cc_plugin_core)
    set (name ${CORE_LIB_NAME})
    set (src
        cc_tools_qt_plugin/cc_ublox/field/CfgNavx5AopCfg.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNavx5AopOrbMaxErr.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNavx5Mask1.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNavx5Mask2.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNavx5SigAttenCompMode.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValData8.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValKeyId.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValL.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValLayer.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValPair.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValPairSimple.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValR4.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValR8.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValSat.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValU1.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValU2.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValU4.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValU8.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValUartDataBits.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValUartParity.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgValUartStopBits.cpp
        cc_tools_qt_plugin/cc_ublox/field/GeofenceRadius.cpp
        cc_tools_qt_plugin/cc_ublox/field/GeofenceState.cpp
        cc_tools_qt_plugin/cc_ublox/field/InfMask.cpp
        cc_tools_qt_plugin/cc_ublox/field/MonAntPower.cpp
        cc_tools_qt_plugin/cc_ublox/field/MonAntStatus.cpp
        cc_tools_qt_plugin/cc_ublox/field/MonJammingState.cpp
        cc_tools_qt_plugin/cc_ublox/field/MsgId.cpp
        cc_tools_qt_plugin/cc_ublox/field/NmeaVersion.cpp
        cc_tools_qt_plugin/cc_ublox/field/Alt.cpp
        cc_tools_qt_plugin/cc_ublox/field/AltHP.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgCfgMask.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgDatD.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgDatDatumNum.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgDatFlat.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgDatMajA.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgDatRot.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgDatScale.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgMainTalkerId.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNmeaFilter.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNmeaFlags.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNmeaGnssToFilter.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNmeaGsvTalkerId.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNmeaNumSV.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNmeaSvNumbering.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgNvsMask.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgPm2Flags.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgPrtFlags.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgPrtInProtoMask.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgPrtOutProtoMask.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgPrtPortId.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgPrtTxReady.cpp
        cc_tools_qt_plugin/cc_ublox/field/CfgTp5TpIdx.cpp
        cc_tools_qt_plugin/cc_ublox/field/Day.cpp
        cc_tools_qt_plugin/cc_ublox/field/Dop.cpp
        cc_tools_qt_plugin/cc_ublox/field/EcefHP.cpp
        cc_tools_qt_plugin/cc_ublox/field/EcefVX.cpp
        cc_tools_qt_plugin/cc_ublox/field/EcefVY.cpp
        cc_tools_qt_plugin/cc_ublox/field/EcefVZ.cpp
        cc_tools_qt_plugin/cc_ublox/field/EcefX.cpp
        cc_tools_qt_plugin/cc_ublox/field/EcefY.cpp
        cc_tools_qt_plugin/cc_ublox/field/EcefZ.cpp
        cc_tools_qt_plugin/cc_ublox/field/FixedPosAcc.cpp
        cc_tools_qt_plugin/cc_ublox/field/Ftow.cpp
        cc_tools_qt_plugin/cc_ublox/field/GnssId.cpp
        cc_tools_qt_plugin/cc_ublox/field/GpsFix.cpp
        cc_tools_qt_plugin/cc_ublox/field/HAcc.cpp
        cc_tools_qt_plugin/cc_ublox/field/HMSL.cpp
        cc_tools_qt_plugin/cc_ublox/field/Heading.cpp
        cc_tools_qt_plugin/cc_ublox/field/HeadingAcc.cpp
        cc_tools_qt_plugin/cc_ublox/field/Height.cpp
        cc_tools_qt_plugin/cc_ublox/field/Hour.cpp
        cc_tools_qt_plugin/cc_ublox/field/Itow.cpp
        cc_tools_qt_plugin/cc_ublox/field/Lat.cpp
        cc_tools_qt_plugin/cc_ublox/field/LatHP.cpp
        cc_tools_qt_plugin/cc_ublox/field/Lon.cpp
        cc_tools_qt_plugin/cc_ublox/field/LonHP.cpp
        cc_tools_qt_plugin/cc_ublox/field/Min.cpp
        cc_tools_qt_plugin/cc_ublox/field/MonMsgppCount.cpp
        cc_tools_qt_plugin/cc_ublox/field/Month.cpp
        cc_tools_qt_plugin/cc_ublox/field/PAcc.cpp
        cc_tools_qt_plugin/cc_ublox/field/PsmState.cpp
        cc_tools_qt_plugin/cc_ublox/field/Res1.cpp
        cc_tools_qt_plugin/cc_ublox/field/Res2.cpp
        cc_tools_qt_plugin/cc_ublox/field/Res3.cpp
        cc_tools_qt_plugin/cc_ublox/field/Res4.cpp
        cc_tools_qt_plugin/cc_ublox/field/Res5.cpp
        cc_tools_qt_plugin/cc_ublox/field/Res6.cpp
        cc_tools_qt_plugin/cc_ublox/field/Res7.cpp
        cc_tools_qt_plugin/cc_ublox/field/Res8.cpp
        cc_tools_qt_plugin/cc_ublox/field/SAcc.cpp
        cc_tools_qt_plugin/cc_ublox/field/SbasService.cpp
        cc_tools_qt_plugin/cc_ublox/field/SbasSys.cpp
        cc_tools_qt_plugin/cc_ublox/field/Sec.cpp
        cc_tools_qt_plugin/cc_ublox/field/VAcc.cpp
        cc_tools_qt_plugin/cc_ublox/field/Vel.cpp
        cc_tools_qt_plugin/cc_ublox/field/Year.cpp
        cc_tools_qt_plugin/cc_ublox/message/AckAck.cpp
        cc_tools_qt_plugin/cc_ublox/message/AckNak.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAlm.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAlmPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAlmPollSv.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAlp.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAlpData.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAlpStatus.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAlpsrv.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAlpsrvToServer.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAop.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAopPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAopPollSv.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidAopU8.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidData.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidEph.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidEphPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidEphPollSv.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidHui.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidHuiPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidIni.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidIniPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/AidReq.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgAnt.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgAntPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgCfg.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgDat.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgDatPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgDatStandard.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgDatUser.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgDgnss.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgDgnssPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgDosc.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgDoscPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgEkf.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgEkfPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgEsrc.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgEsrcPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgFixseed.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgFxn.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgFxnPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgGeofence.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgGeofencePoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgGnss.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgGnssPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgHnr.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgHnrPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgInf.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgInfPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgItfm.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgItfmPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgLogfilter.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgLogfilterPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgMsg.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgMsgCurrent.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgMsgPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNav5.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNav5Poll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNavx5.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNavx5Poll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNavx5V2.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNavx5V3.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNmea.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNmeaPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNmeaV0.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNmeaV1.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgNvs.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgOdo.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgOdoPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPm.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPm2.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPm2Poll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPm2V2.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPmPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPms.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPmsPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPrtDdc.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPrtPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPrtPortPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPrtSpi.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPrtUart.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPrtUsb.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgPwr.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgRate.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgRatePoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgRinv.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgRinvPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgRst.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgRxm.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgRxmPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgSbas.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgSbasPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgSmgr.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgSmgrPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTmode.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTmode2.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTmode2Poll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTmode3.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTmode3Poll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTmodePoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTp.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTp5.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTp5Poll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTp5PollSelect.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTpPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgTxslot.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgUsb.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgUsbPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgValdel.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgValget.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgValgetPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/CfgValset.cpp
        cc_tools_qt_plugin/cc_ublox/message/EsfIns.cpp
        cc_tools_qt_plugin/cc_ublox/message/EsfInsPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/EsfMeas.cpp
        cc_tools_qt_plugin/cc_ublox/message/EsfMeasPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/EsfRaw.cpp
        cc_tools_qt_plugin/cc_ublox/message/EsfStatus.cpp
        cc_tools_qt_plugin/cc_ublox/message/EsfStatusPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/HnrPvt.cpp
        cc_tools_qt_plugin/cc_ublox/message/HnrPvtPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/InfDebug.cpp
        cc_tools_qt_plugin/cc_ublox/message/InfError.cpp
        cc_tools_qt_plugin/cc_ublox/message/InfNotice.cpp
        cc_tools_qt_plugin/cc_ublox/message/InfTest.cpp
        cc_tools_qt_plugin/cc_ublox/message/InfWarning.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogBatch.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogCreate.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogErase.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogFindtime.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogFindtimeResp.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogInfo.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogInfoPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogRetrieve.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogRetrievebatch.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogRetrievepos.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogRetrieveposextra.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogRetrievestring.cpp
        cc_tools_qt_plugin/cc_ublox/message/LogString.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaAck.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaAno.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaBdsAlm.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaBdsEph.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaBdsHealth.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaBdsIono.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaBdsUtc.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaDbd.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaDbdPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaFlashAck.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaFlashEph.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaFlashStop.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGalAlm.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGalEph.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGalTimeoffset.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGalUtc.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGloAlm.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGloEph.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGloTimeoffset.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGpsAlm.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGpsEph.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGpsHealth.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGpsIono.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaGpsUtc.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaIniClkd.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaIniEop.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaIniFreq.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaIniPosLlh.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaIniPosXyz.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaIniTimeGnss.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaIniTimeUtc.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaQzssAlm.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaQzssEph.cpp
        cc_tools_qt_plugin/cc_ublox/message/MgaQzssHealth.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonComms.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonCommsPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonGnss.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonGnssPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonHw.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonHw2.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonHw2Poll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonHw3.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonHw3Poll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonHwPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonIo.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonIoPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonMsgpp.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonMsgppPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonPatch.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonPatchPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonRf.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonRfPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonRxbuf.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonRxbufPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonRxr.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonSmgr.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonSmgrPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonSpan.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonSpanPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonTxbuf.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonTxbufPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonVer.cpp
        cc_tools_qt_plugin/cc_ublox/message/MonVerPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavAopstatus.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavAopstatusPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavAopstatusUblox8.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavAtt.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavAttPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavClock.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavClockPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavDgps.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavDgpsPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavDop.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavDopPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavEoe.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavGeofence.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavGeofencePoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavHpposecef.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavHpposecefPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavHpposllh.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavHpposllhPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavOdo.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavOdoPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavOrb.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavOrbPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavPosecef.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavPosecefPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavPosllh.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavPosllhPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavPvt.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavPvtPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavPvt_u8.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavRelposned.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavRelposnedPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavRelposned_v1.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavResetodo.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSat.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSatPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSbas.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSbasPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSig.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSigPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSlas.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSlasPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSol.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSolPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavStatus.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavStatusPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSvin.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSvinPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSvinfo.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavSvinfoPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimebds.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimebdsPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimegal.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimegalPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimeglo.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimegloPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimegps.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimegpsPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimels.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimelsPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimeutc.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavTimeutcPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavVelecef.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavVelecefPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavVelned.cpp
        cc_tools_qt_plugin/cc_ublox/message/NavVelnedPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmAlm.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmAlmPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmAlmPollSv.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmEph.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmEphPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmEphPollSv.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmImes.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmImesPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmMeasx.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmMeasxPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmPmreq.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmPmreqV0.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmRaw.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmRawPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmRawx.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmRawxPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmRlmLong.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmRlmShort.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmRtcm.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmSfrb.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmSfrbx.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmSvsi.cpp
        cc_tools_qt_plugin/cc_ublox/message/RxmSvsiPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/SecSign.cpp
        cc_tools_qt_plugin/cc_ublox/message/SecUniqid.cpp
        cc_tools_qt_plugin/cc_ublox/message/SecUniqidPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimDosc.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimFchg.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimFchgPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimSmeas.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimSvin.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimSvinPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimTm2.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimTm2Poll.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimTos.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimTp.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimTpPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimVcocal.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimVcocalExt.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimVcocalPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimVcocalStop.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimVrfy.cpp
        cc_tools_qt_plugin/cc_ublox/message/TimVrfyPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/UpdSosAck.cpp
        cc_tools_qt_plugin/cc_ublox/message/UpdSosClear.cpp
        cc_tools_qt_plugin/cc_ublox/message/UpdSosCreate.cpp
        cc_tools_qt_plugin/cc_ublox/message/UpdSosPoll.cpp
        cc_tools_qt_plugin/cc_ublox/message/UpdSosRestored.cpp
        cc_tools_qt_plugin/cc_ublox/Message.cpp
        cc_tools_qt_plugin/cc_ublox/frame/UbloxFrameTransportMessage.cpp
        cc_tools_qt_plugin/cc_ublox/factory/AllMessagesDynMemMsgFactory.cpp
    )

    add_library (${name} STATIC ${src})
    target_link_libraries (${name} PUBLIC cc::cc_ublox cc::comms cc::cc_tools_qt Qt${OPT_QT_MAJOR_VERSION}::Widgets Qt${OPT_QT_MAJOR_VERSION}::Core)
    target_include_directories (${name} PUBLIC ${PROJECT_SOURCE_DIR})
    target_compile_options(${name} PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/bigobj /wd4127 /wd5054>
        $<$<CXX_COMPILER_ID:GNU>:-ftemplate-depth=2048 -fconstexpr-depth=4096 -Wno-unused-local-typedefs>
        $<$<CXX_COMPILER_ID:Clang>:-ftemplate-depth=2048 -fconstexpr-depth=4096 -Wno-unused-local-typedefs>
    )

endfunction()

######################################################################

function (cc_plugin protocol has_config_widget)
    string(TOLOWER "cc_tools_plugin_${protocol}" name)

    if (NOT "${name}" MATCHES ".*_protocol$")
        string(APPEND name "_protocol")
    endif ()

    set (meta_file "${CMAKE_CURRENT_SOURCE_DIR}/cc_tools_qt_plugin/cc_ublox/plugin/Plugin_${protocol}.json")
    set (stamp_file "${CMAKE_CURRENT_BINARY_DIR}/${protocol}_refresh_stamp.txt")

    if ((NOT EXISTS ${stamp_file}) OR (${meta_file} IS_NEWER_THAN ${stamp_file}))
        execute_process(
            COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_SOURCE_DIR}/cc_tools_qt_plugin/cc_ublox/plugin/Plugin_${protocol}.h)

        execute_process(
            COMMAND ${CMAKE_COMMAND} -E touch ${stamp_file})
    endif ()

    set (src
        cc_tools_qt_plugin/cc_ublox/plugin/Protocol_${protocol}.cpp
        cc_tools_qt_plugin/cc_ublox/plugin/Plugin_${protocol}.cpp
        cc_tools_qt_plugin/cc_ublox/plugin/Plugin_${protocol}.h
    )

    if (has_config_widget)
        list (APPEND src cc_tools_qt_plugin/cc_ublox/plugin/ConfigWidget_${protocol}.cpp)
    endif ()

    set(extra_link_opts)
    if (CMAKE_COMPILER_IS_GNUCC)
        set(extra_link_opts "-Wl,--no-undefined")
    endif ()

    add_library (${name} MODULE ${src} ${moc})
    target_link_libraries (${name} ${CORE_LIB_NAME} cc::cc_tools_qt Qt${OPT_QT_MAJOR_VERSION}::Widgets Qt${OPT_QT_MAJOR_VERSION}::Core ${extra_link_opts})
    target_compile_options(${name} PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/bigobj /wd4127 /wd5054>
        $<$<CXX_COMPILER_ID:GNU>:-ftemplate-depth=2048 -fconstexpr-depth=4096>
        $<$<CXX_COMPILER_ID:Clang>:-ftemplate-depth=2048 -fconstexpr-depth=4096>
    )

    install (
        TARGETS ${name}
        DESTINATION ${CMAKE_INSTALL_FULL_LIBDIR}/cc_tools_qt/plugin)

    if (OPT_INSTALL_DEFAULT_CONFIG)
        install (
            FILES cc_tools_qt_plugin/cc_ublox/plugin/${protocol}.cfg
            DESTINATION ${CMAKE_INSTALL_FULL_DATAROOTDIR}/cc_tools_qt)
    endif()
endfunction()

######################################################################

if (TARGET cc::cc_tools_qt)
    get_target_property(cc_inc cc::cc_tools_qt INTERFACE_INCLUDE_DIRECTORIES)

    if (NOT cc_inc)
        message (FATAL_ERROR "No include directories are specified for cc::cc_tools_qt")
    endif ()

    # Global include is required for "moc"
    include_directories (${cc_inc})
endif ()

cc_plugin_core()

cc_plugin ("CC_UBLOX" FALSE)

// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include <tuple>
#include "cc_tools_qt_plugin/cc_ublox/message/AckAck.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AckNak.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidAlm.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidAlmPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidAlmPollSv.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidAlp.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidAlpData.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidAlpStatus.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidAlpsrv.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidAlpsrvToServer.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidData.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidEph.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidEphPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidEphPollSv.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidHui.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidHuiPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidIni.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidIniPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/AidReq.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgAnt.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgAntPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgCfg.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgDat.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgDatPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgDatStandard.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgDatUser.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgInf.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgInfPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgMsg.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgMsgCurrent.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgMsgPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgNav5.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgNav5Poll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgNavx5.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgNavx5Poll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgNmea.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgNmeaPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgPrtDdc.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgPrtPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgPrtPortPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgPrtSpi.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgPrtUart.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgPrtUsb.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgRate.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgRatePoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgRst.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgRxm.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgRxmPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgSbas.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgSbasPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgTmode.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgTmodePoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgTp.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgTpPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgUsb.h"
#include "cc_tools_qt_plugin/cc_ublox/message/CfgUsbPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/InfDebug.h"
#include "cc_tools_qt_plugin/cc_ublox/message/InfError.h"
#include "cc_tools_qt_plugin/cc_ublox/message/InfNotice.h"
#include "cc_tools_qt_plugin/cc_ublox/message/InfTest.h"
#include "cc_tools_qt_plugin/cc_ublox/message/InfWarning.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonHw.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonHwPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonIo.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonIoPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonMsgpp.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonMsgppPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonRxbuf.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonRxbufPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonTxbuf.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonTxbufPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonVer.h"
#include "cc_tools_qt_plugin/cc_ublox/message/MonVerPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavClock.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavClockPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavDop.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavDopPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavPosecef.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavPosecefPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavPosllh.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavPosllhPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavSbas.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavSbasPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavSol.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavSolPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavStatus.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavStatusPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavSvinfo.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavSvinfoPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavTimegps.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavTimegpsPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavTimeutc.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavTimeutcPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavVelecef.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavVelecefPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavVelned.h"
#include "cc_tools_qt_plugin/cc_ublox/message/NavVelnedPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/RxmSvsi.h"
#include "cc_tools_qt_plugin/cc_ublox/message/RxmSvsiPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/TimSvin.h"
#include "cc_tools_qt_plugin/cc_ublox/message/TimSvinPoll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/TimTm2.h"
#include "cc_tools_qt_plugin/cc_ublox/message/TimTm2Poll.h"
#include "cc_tools_qt_plugin/cc_ublox/message/TimTp.h"
#include "cc_tools_qt_plugin/cc_ublox/message/TimTpPoll.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace input
{

using Ublox5Messages =
    std::tuple<
        cc_tools_qt_plugin::cc_ublox::message::NavPosecef,
        cc_tools_qt_plugin::cc_ublox::message::NavPosecefPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavPosllh,
        cc_tools_qt_plugin::cc_ublox::message::NavPosllhPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavStatus,
        cc_tools_qt_plugin::cc_ublox::message::NavStatusPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavDop,
        cc_tools_qt_plugin::cc_ublox::message::NavDopPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavSol,
        cc_tools_qt_plugin::cc_ublox::message::NavSolPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavVelecef,
        cc_tools_qt_plugin::cc_ublox::message::NavVelecefPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavVelned,
        cc_tools_qt_plugin::cc_ublox::message::NavVelnedPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavTimegps,
        cc_tools_qt_plugin::cc_ublox::message::NavTimegpsPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavTimeutc,
        cc_tools_qt_plugin::cc_ublox::message::NavTimeutcPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavClock,
        cc_tools_qt_plugin::cc_ublox::message::NavClockPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavSvinfo,
        cc_tools_qt_plugin::cc_ublox::message::NavSvinfoPoll,
        cc_tools_qt_plugin::cc_ublox::message::NavSbas,
        cc_tools_qt_plugin::cc_ublox::message::NavSbasPoll,
        cc_tools_qt_plugin::cc_ublox::message::RxmSvsi,
        cc_tools_qt_plugin::cc_ublox::message::RxmSvsiPoll,
        cc_tools_qt_plugin::cc_ublox::message::InfError,
        cc_tools_qt_plugin::cc_ublox::message::InfWarning,
        cc_tools_qt_plugin::cc_ublox::message::InfNotice,
        cc_tools_qt_plugin::cc_ublox::message::InfTest,
        cc_tools_qt_plugin::cc_ublox::message::InfDebug,
        cc_tools_qt_plugin::cc_ublox::message::AckNak,
        cc_tools_qt_plugin::cc_ublox::message::AckAck,
        cc_tools_qt_plugin::cc_ublox::message::CfgPrtDdc,
        cc_tools_qt_plugin::cc_ublox::message::CfgPrtUart,
        cc_tools_qt_plugin::cc_ublox::message::CfgPrtUsb,
        cc_tools_qt_plugin::cc_ublox::message::CfgPrtSpi,
        cc_tools_qt_plugin::cc_ublox::message::CfgPrtPortPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgPrtPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgMsg,
        cc_tools_qt_plugin::cc_ublox::message::CfgMsgCurrent,
        cc_tools_qt_plugin::cc_ublox::message::CfgMsgPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgInf,
        cc_tools_qt_plugin::cc_ublox::message::CfgInfPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgRst,
        cc_tools_qt_plugin::cc_ublox::message::CfgDat,
        cc_tools_qt_plugin::cc_ublox::message::CfgDatUser,
        cc_tools_qt_plugin::cc_ublox::message::CfgDatStandard,
        cc_tools_qt_plugin::cc_ublox::message::CfgDatPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgTp,
        cc_tools_qt_plugin::cc_ublox::message::CfgTpPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgRate,
        cc_tools_qt_plugin::cc_ublox::message::CfgRatePoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgCfg,
        cc_tools_qt_plugin::cc_ublox::message::CfgRxm,
        cc_tools_qt_plugin::cc_ublox::message::CfgRxmPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgAnt,
        cc_tools_qt_plugin::cc_ublox::message::CfgAntPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgSbas,
        cc_tools_qt_plugin::cc_ublox::message::CfgSbasPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgNmea,
        cc_tools_qt_plugin::cc_ublox::message::CfgNmeaPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgUsb,
        cc_tools_qt_plugin::cc_ublox::message::CfgUsbPoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgTmode,
        cc_tools_qt_plugin::cc_ublox::message::CfgTmodePoll,
        cc_tools_qt_plugin::cc_ublox::message::CfgNavx5,
        cc_tools_qt_plugin::cc_ublox::message::CfgNavx5Poll,
        cc_tools_qt_plugin::cc_ublox::message::CfgNav5,
        cc_tools_qt_plugin::cc_ublox::message::CfgNav5Poll,
        cc_tools_qt_plugin::cc_ublox::message::MonIo,
        cc_tools_qt_plugin::cc_ublox::message::MonIoPoll,
        cc_tools_qt_plugin::cc_ublox::message::MonVer,
        cc_tools_qt_plugin::cc_ublox::message::MonVerPoll,
        cc_tools_qt_plugin::cc_ublox::message::MonMsgpp,
        cc_tools_qt_plugin::cc_ublox::message::MonMsgppPoll,
        cc_tools_qt_plugin::cc_ublox::message::MonRxbuf,
        cc_tools_qt_plugin::cc_ublox::message::MonRxbufPoll,
        cc_tools_qt_plugin::cc_ublox::message::MonTxbuf,
        cc_tools_qt_plugin::cc_ublox::message::MonTxbufPoll,
        cc_tools_qt_plugin::cc_ublox::message::MonHw,
        cc_tools_qt_plugin::cc_ublox::message::MonHwPoll,
        cc_tools_qt_plugin::cc_ublox::message::AidReq,
        cc_tools_qt_plugin::cc_ublox::message::AidIni,
        cc_tools_qt_plugin::cc_ublox::message::AidIniPoll,
        cc_tools_qt_plugin::cc_ublox::message::AidHui,
        cc_tools_qt_plugin::cc_ublox::message::AidHuiPoll,
        cc_tools_qt_plugin::cc_ublox::message::AidData,
        cc_tools_qt_plugin::cc_ublox::message::AidAlm,
        cc_tools_qt_plugin::cc_ublox::message::AidAlmPollSv,
        cc_tools_qt_plugin::cc_ublox::message::AidAlmPoll,
        cc_tools_qt_plugin::cc_ublox::message::AidEph,
        cc_tools_qt_plugin::cc_ublox::message::AidEphPollSv,
        cc_tools_qt_plugin::cc_ublox::message::AidEphPoll,
        cc_tools_qt_plugin::cc_ublox::message::AidAlpsrv,
        cc_tools_qt_plugin::cc_ublox::message::AidAlpsrvToServer,
        cc_tools_qt_plugin::cc_ublox::message::AidAlp,
        cc_tools_qt_plugin::cc_ublox::message::AidAlpStatus,
        cc_tools_qt_plugin::cc_ublox::message::AidAlpData,
        cc_tools_qt_plugin::cc_ublox::message::TimTp,
        cc_tools_qt_plugin::cc_ublox::message::TimTpPoll,
        cc_tools_qt_plugin::cc_ublox::message::TimTm2,
        cc_tools_qt_plugin::cc_ublox::message::TimTm2Poll,
        cc_tools_qt_plugin::cc_ublox::message::TimSvin,
        cc_tools_qt_plugin::cc_ublox::message::TimSvinPoll
    >;

} // namespace input

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

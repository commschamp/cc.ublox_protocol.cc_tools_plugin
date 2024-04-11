// Generated by commsdsl2tools_qt v6.3.2

#include "CfgPrtDdc.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgPrtFlags.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgPrtInProtoMask.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgPrtOutProtoMask.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgPrtTxReady.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgPrtDdc.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_portId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PortId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_txReady(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TxReady;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgPrtTxReady(Field::name(), serHidden);
    return props;
}

struct ModeMembers
{
    static QVariantMap createProps_reservedLow(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ModeMembers::ReservedLow;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .hidden()
                .asMap();
    }

    static QVariantMap createProps_slaveAddr(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ModeMembers::SlaveAddr;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }

    static QVariantMap createProps_reservedHigh(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ModeMembers::ReservedHigh;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .hidden()
                .asMap();
    }
}; // struct ModeMembers

static QVariantMap createProps_mode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Mode;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(ModeMembers::createProps_reservedLow(true))
            .add(ModeMembers::createProps_slaveAddr(true))
            .add(ModeMembers::createProps_reservedHigh(true))
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_inProtoMask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::InProtoMask;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgPrtInProtoMask(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_outProtoMask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OutProtoMask;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgPrtOutProtoMask(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_cfgPrtFlags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::CfgPrtFlags;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgPrtFlags(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtDdcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_portId(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_txReady(false));
    props.append(createProps_mode(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_inProtoMask(false));
    props.append(createProps_outProtoMask(false));
    props.append(createProps_cfgPrtFlags(false));
    props.append(createProps_reserved3(false));
    return props;
}

} // namespace

class CfgPrtDdcImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgPrtDdc<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgPrtDdcImpl
    >
{
public:
    CfgPrtDdcImpl() = default;
    CfgPrtDdcImpl(const CfgPrtDdcImpl&) = delete;
    CfgPrtDdcImpl(CfgPrtDdcImpl&&) = delete;
    virtual ~CfgPrtDdcImpl() = default;
    CfgPrtDdcImpl& operator=(const CfgPrtDdcImpl&) = default;
    CfgPrtDdcImpl& operator=(CfgPrtDdcImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPrtDdc::CfgPrtDdc() : m_pImpl(new CfgPrtDdcImpl) {}
CfgPrtDdc::~CfgPrtDdc() = default;

CfgPrtDdc& CfgPrtDdc::operator=(const CfgPrtDdc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPrtDdc& CfgPrtDdc::operator=(CfgPrtDdc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgPrtDdc::MsgIdParamType CfgPrtDdc::doGetId()
{
    return ::cc_ublox::message::CfgPrtDdc<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgPrtDdc::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPrtDdc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPrtDdc::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPrtDdc::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtDdc::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtDdc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPrtDdc::MsgIdParamType CfgPrtDdc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPrtDdc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPrtDdc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPrtDdc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPrtDdc::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPrtDdc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

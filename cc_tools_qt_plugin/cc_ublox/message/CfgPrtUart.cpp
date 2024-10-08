// Generated by commsdsl2tools_qt v6.3.4

#include "CfgPrtUart.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgPrtFlags.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgPrtInProtoMask.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgPrtOutProtoMask.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgPrtTxReady.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgPrtUart.h"

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
    using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PortId;
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
    using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_txReady(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TxReady;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgPrtTxReady(Field::name(), serHidden);
    return props;
}

struct ModeMembers
{
    static QVariantMap createProps_reservedLow(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ModeMembers::ReservedLow;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .hidden()
                .asMap();
    }

    static QVariantMap createProps_charLen(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ModeMembers::CharLen;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("5 bits", 0)
                .add("6 bits", 1)
                .add("7 bits", 2)
                .add("8 bits", 3)
                .asMap();
    }

    static QVariantMap createProps_reservedMid(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ModeMembers::ReservedMid;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .hidden()
                .asMap();
    }

    static QVariantMap createProps_parity(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ModeMembers::Parity;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("Even", 0)
                .add("Odd", 1)
                .add("None", 4)
                .add("None (2)", 5)
                .asMap();
    }

    static QVariantMap createProps_nStopBits(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ModeMembers::NStopBits;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("1 bit", 0)
                .add("1.5 bits", 1)
                .add("2 bits", 2)
                .add("0.5 bit", 3)
                .asMap();
    }

    static QVariantMap createProps_reservedHigh(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ModeMembers::ReservedHigh;
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
    using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Mode;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(ModeMembers::createProps_reservedLow(true))
            .add(ModeMembers::createProps_charLen(true))
            .add(ModeMembers::createProps_reservedMid(true))
            .add(ModeMembers::createProps_parity(true))
            .add(ModeMembers::createProps_nStopBits(true))
            .add(ModeMembers::createProps_reservedHigh(true))
            .asMap();
}

static QVariantMap createProps_baudRate(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::BaudRate;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_inProtoMask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::InProtoMask;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgPrtInProtoMask(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_outProtoMask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OutProtoMask;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgPrtOutProtoMask(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_cfgPrtFlags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::CfgPrtFlags;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgPrtFlags(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPrtUartFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
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
    props.append(createProps_baudRate(false));
    props.append(createProps_inProtoMask(false));
    props.append(createProps_outProtoMask(false));
    props.append(createProps_cfgPrtFlags(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class CfgPrtUartImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgPrtUart<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgPrtUartImpl
    >
{
public:
    CfgPrtUartImpl() = default;
    CfgPrtUartImpl(const CfgPrtUartImpl&) = delete;
    CfgPrtUartImpl(CfgPrtUartImpl&&) = delete;
    virtual ~CfgPrtUartImpl() = default;
    CfgPrtUartImpl& operator=(const CfgPrtUartImpl&) = default;
    CfgPrtUartImpl& operator=(CfgPrtUartImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPrtUart::CfgPrtUart() : m_pImpl(new CfgPrtUartImpl) {}
CfgPrtUart::~CfgPrtUart() = default;

CfgPrtUart& CfgPrtUart::operator=(const CfgPrtUart& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPrtUart& CfgPrtUart::operator=(CfgPrtUart&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgPrtUart::MsgIdParamType CfgPrtUart::doGetId()
{
    return ::cc_ublox::message::CfgPrtUart<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgPrtUart::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPrtUart::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPrtUart::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPrtUart::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtUart::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtUart*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPrtUart::MsgIdParamType CfgPrtUart::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPrtUart::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPrtUart::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPrtUart::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPrtUart::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPrtUart::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

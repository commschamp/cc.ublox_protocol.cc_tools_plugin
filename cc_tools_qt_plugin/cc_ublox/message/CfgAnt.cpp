// Generated by commsdsl2tools_qt v6.3.4

#include "CfgAnt.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgAnt.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgAntFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "svcs")
            .add(1U, "scd")
            .add(2U, "ocd")
            .add(3U, "pdwnOnSCD")
            .add(4U, "recovery")
            .asMap();
}

struct PinsMembers
{
    static QVariantMap createProps_pinSwitch(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgAntFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PinsMembers::PinSwitch;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }

    static QVariantMap createProps_pinSCD(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgAntFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PinsMembers::PinSCD;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }

    static QVariantMap createProps_pinOCD(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgAntFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PinsMembers::PinOCD;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }

    static QVariantMap createProps_bits(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgAntFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PinsMembers::Bits;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "reconfig")
                .asMap();
    }
}; // struct PinsMembers

static QVariantMap createProps_pins(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgAntFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Pins;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(PinsMembers::createProps_pinSwitch(true))
            .add(PinsMembers::createProps_pinSCD(true))
            .add(PinsMembers::createProps_pinOCD(true))
            .add(PinsMembers::createProps_bits(true))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags(false));
    props.append(createProps_pins(false));
    return props;
}

} // namespace

class CfgAntImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgAnt<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgAntImpl
    >
{
public:
    CfgAntImpl() = default;
    CfgAntImpl(const CfgAntImpl&) = delete;
    CfgAntImpl(CfgAntImpl&&) = delete;
    virtual ~CfgAntImpl() = default;
    CfgAntImpl& operator=(const CfgAntImpl&) = default;
    CfgAntImpl& operator=(CfgAntImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgAnt::CfgAnt() : m_pImpl(new CfgAntImpl) {}
CfgAnt::~CfgAnt() = default;

CfgAnt& CfgAnt::operator=(const CfgAnt& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgAnt& CfgAnt::operator=(CfgAnt&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgAnt::MsgIdParamType CfgAnt::doGetId()
{
    return ::cc_ublox::message::CfgAnt<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgAnt::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgAnt::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgAnt::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgAnt::resetImpl()
{
    m_pImpl->reset();
}

bool CfgAnt::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgAnt*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgAnt::MsgIdParamType CfgAnt::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgAnt::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgAnt::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgAnt::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgAnt::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgAnt::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

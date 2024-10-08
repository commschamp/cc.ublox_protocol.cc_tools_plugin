// Generated by commsdsl2tools_qt v6.3.4

#include "CfgPms.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgPms.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_powerSetupValue(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PowerSetupValue;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Full power", 0)
            .add("Balanced", 1)
            .add("Interval", 2)
            .add("Aggressive with 1Hz", 3)
            .add("Aggressive with 2Hz", 4)
            .add("Aggressive with 4Hz", 5)
            .add("Invalid", 255)
            .asMap();
}

static QVariantMap createProps_period(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Period;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_onTime(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OnTime;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_powerSetupValue(false));
    props.append(createProps_period(false));
    props.append(createProps_onTime(false));
    props.append(createProps_reserved1(false));
    return props;
}

} // namespace

class CfgPmsImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgPms<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgPmsImpl
    >
{
public:
    CfgPmsImpl() = default;
    CfgPmsImpl(const CfgPmsImpl&) = delete;
    CfgPmsImpl(CfgPmsImpl&&) = delete;
    virtual ~CfgPmsImpl() = default;
    CfgPmsImpl& operator=(const CfgPmsImpl&) = default;
    CfgPmsImpl& operator=(CfgPmsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPms::CfgPms() : m_pImpl(new CfgPmsImpl) {}
CfgPms::~CfgPms() = default;

CfgPms& CfgPms::operator=(const CfgPms& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPms& CfgPms::operator=(CfgPms&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgPms::MsgIdParamType CfgPms::doGetId()
{
    return ::cc_ublox::message::CfgPms<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgPms::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPms::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPms::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPms::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPms::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPms*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPms::MsgIdParamType CfgPms::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPms::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPms::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPms::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPms::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPms::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

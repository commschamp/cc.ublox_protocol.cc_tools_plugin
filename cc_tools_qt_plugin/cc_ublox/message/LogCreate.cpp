// Generated by commsdsl2tools_qt v6.3.0

#include "LogCreate.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/LogCreate.h"

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
    using Field = ::cc_ublox::message::LogCreateFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_logCfg(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::LogCreateFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LogCfg;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "logCfg")
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::LogCreateFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_logSize(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::LogCreateFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LogSize;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Maximum", 0)
            .add("Minimum", 1)
            .add("UserDefined", 2)
            .asMap();
}

static QVariantMap createProps_userDefinedSize(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::LogCreateFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UserDefinedSize;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_logCfg(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_logSize(false));
    props.append(createProps_userDefinedSize(false));
    return props;
}

} // namespace

class LogCreateImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::LogCreate<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        LogCreateImpl
    >
{
public:
    LogCreateImpl() = default;
    LogCreateImpl(const LogCreateImpl&) = delete;
    LogCreateImpl(LogCreateImpl&&) = delete;
    virtual ~LogCreateImpl() = default;
    LogCreateImpl& operator=(const LogCreateImpl&) = default;
    LogCreateImpl& operator=(LogCreateImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogCreate::LogCreate() : m_pImpl(new LogCreateImpl) {}
LogCreate::~LogCreate() = default;

LogCreate& LogCreate::operator=(const LogCreate& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogCreate& LogCreate::operator=(LogCreate&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

LogCreate::MsgIdParamType LogCreate::doGetId()
{
    return ::cc_ublox::message::LogCreate<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* LogCreate::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogCreate::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogCreate::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogCreate::resetImpl()
{
    m_pImpl->reset();
}

bool LogCreate::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const LogCreate*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogCreate::MsgIdParamType LogCreate::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogCreate::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogCreate::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogCreate::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogCreate::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogCreate::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
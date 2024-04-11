// Generated by commsdsl2tools_qt v6.3.2

#include "LogRetrieve.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/LogRetrieve.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_startNumber(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::LogRetrieveFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::StartNumber;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_entryCount(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::LogRetrieveFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EntryCount;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::LogRetrieveFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::LogRetrieveFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_startNumber(false));
    props.append(createProps_entryCount(false));
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    return props;
}

} // namespace

class LogRetrieveImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::LogRetrieve<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        LogRetrieveImpl
    >
{
public:
    LogRetrieveImpl() = default;
    LogRetrieveImpl(const LogRetrieveImpl&) = delete;
    LogRetrieveImpl(LogRetrieveImpl&&) = delete;
    virtual ~LogRetrieveImpl() = default;
    LogRetrieveImpl& operator=(const LogRetrieveImpl&) = default;
    LogRetrieveImpl& operator=(LogRetrieveImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogRetrieve::LogRetrieve() : m_pImpl(new LogRetrieveImpl) {}
LogRetrieve::~LogRetrieve() = default;

LogRetrieve& LogRetrieve::operator=(const LogRetrieve& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogRetrieve& LogRetrieve::operator=(LogRetrieve&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

LogRetrieve::MsgIdParamType LogRetrieve::doGetId()
{
    return ::cc_ublox::message::LogRetrieve<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* LogRetrieve::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogRetrieve::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogRetrieve::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogRetrieve::resetImpl()
{
    m_pImpl->reset();
}

bool LogRetrieve::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const LogRetrieve*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogRetrieve::MsgIdParamType LogRetrieve::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogRetrieve::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogRetrieve::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogRetrieve::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogRetrieve::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogRetrieve::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

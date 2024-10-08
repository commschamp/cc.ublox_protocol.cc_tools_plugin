// Generated by commsdsl2tools_qt v6.3.4

#include "LogFindtimeResp.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/LogFindtimeResp.h"

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
    using Field = ::cc_ublox::message::LogFindtimeRespFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::LogFindtimeRespFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
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
    using Field = ::cc_ublox::message::LogFindtimeRespFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_entryNumber(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::LogFindtimeRespFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EntryNumber;
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
    props.append(createProps_type(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_entryNumber(false));
    return props;
}

} // namespace

class LogFindtimeRespImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::LogFindtimeResp<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        LogFindtimeRespImpl
    >
{
public:
    LogFindtimeRespImpl() = default;
    LogFindtimeRespImpl(const LogFindtimeRespImpl&) = delete;
    LogFindtimeRespImpl(LogFindtimeRespImpl&&) = delete;
    virtual ~LogFindtimeRespImpl() = default;
    LogFindtimeRespImpl& operator=(const LogFindtimeRespImpl&) = default;
    LogFindtimeRespImpl& operator=(LogFindtimeRespImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogFindtimeResp::LogFindtimeResp() : m_pImpl(new LogFindtimeRespImpl) {}
LogFindtimeResp::~LogFindtimeResp() = default;

LogFindtimeResp& LogFindtimeResp::operator=(const LogFindtimeResp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogFindtimeResp& LogFindtimeResp::operator=(LogFindtimeResp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

LogFindtimeResp::MsgIdParamType LogFindtimeResp::doGetId()
{
    return ::cc_ublox::message::LogFindtimeResp<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* LogFindtimeResp::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogFindtimeResp::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogFindtimeResp::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogFindtimeResp::resetImpl()
{
    m_pImpl->reset();
}

bool LogFindtimeResp::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const LogFindtimeResp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogFindtimeResp::MsgIdParamType LogFindtimeResp::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogFindtimeResp::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogFindtimeResp::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogFindtimeResp::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogFindtimeResp::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogFindtimeResp::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

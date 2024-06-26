// Generated by commsdsl2tools_qt v6.3.3

#include "LogInfoPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/LogInfoPoll.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class LogInfoPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::LogInfoPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        LogInfoPollImpl
    >
{
public:
    LogInfoPollImpl() = default;
    LogInfoPollImpl(const LogInfoPollImpl&) = delete;
    LogInfoPollImpl(LogInfoPollImpl&&) = delete;
    virtual ~LogInfoPollImpl() = default;
    LogInfoPollImpl& operator=(const LogInfoPollImpl&) = default;
    LogInfoPollImpl& operator=(LogInfoPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogInfoPoll::LogInfoPoll() : m_pImpl(new LogInfoPollImpl) {}
LogInfoPoll::~LogInfoPoll() = default;

LogInfoPoll& LogInfoPoll::operator=(const LogInfoPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogInfoPoll& LogInfoPoll::operator=(LogInfoPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

LogInfoPoll::MsgIdParamType LogInfoPoll::doGetId()
{
    return ::cc_ublox::message::LogInfoPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* LogInfoPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogInfoPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogInfoPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogInfoPoll::resetImpl()
{
    m_pImpl->reset();
}

bool LogInfoPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const LogInfoPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogInfoPoll::MsgIdParamType LogInfoPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogInfoPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogInfoPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogInfoPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogInfoPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogInfoPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

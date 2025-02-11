// Generated by commsdsl2tools_qt v7.0.3

#include "LogRetrieve.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/LogRetrieve.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class LogRetrieveImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::LogRetrieve,
        LogRetrieveImpl
    >
{
public:
    LogRetrieveImpl() = default;
    LogRetrieveImpl(const LogRetrieveImpl&) = default;
    LogRetrieveImpl(LogRetrieveImpl&&) = default;
    virtual ~LogRetrieveImpl() = default;
    LogRetrieveImpl& operator=(const LogRetrieveImpl&) = default;
    LogRetrieveImpl& operator=(LogRetrieveImpl&&) = default;
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

const char* LogRetrieve::nameImpl() const
{
    return m_pImpl->name();
}

bool LogRetrieve::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong LogRetrieve::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString LogRetrieve::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void LogRetrieve::resetImpl()
{
    m_pImpl->reset();
}

bool LogRetrieve::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const LogRetrieve*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool LogRetrieve::isValidImpl() const
{
    return m_pImpl->isValid();
}

LogRetrieve::DataSeq LogRetrieve::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool LogRetrieve::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

LogRetrieve::Ptr LogRetrieve::cloneImpl() const
{
    ImplPtr impl(static_cast<LogRetrieveImpl*>(m_pImpl->clone().release()));
    return Ptr(new LogRetrieve(std::move(impl)));
}

void LogRetrieve::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

LogRetrieve::DataSeq LogRetrieve::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

LogRetrieve::FieldsList LogRetrieve::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

LogRetrieve::FieldsList LogRetrieve::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

LogRetrieve::LogRetrieve(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

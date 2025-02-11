// Generated by commsdsl2tools_qt v7.0.3

#include "LogRetrievebatch.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/LogRetrievebatch.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class LogRetrievebatchImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::LogRetrievebatch,
        LogRetrievebatchImpl
    >
{
public:
    LogRetrievebatchImpl() = default;
    LogRetrievebatchImpl(const LogRetrievebatchImpl&) = default;
    LogRetrievebatchImpl(LogRetrievebatchImpl&&) = default;
    virtual ~LogRetrievebatchImpl() = default;
    LogRetrievebatchImpl& operator=(const LogRetrievebatchImpl&) = default;
    LogRetrievebatchImpl& operator=(LogRetrievebatchImpl&&) = default;
};

LogRetrievebatch::LogRetrievebatch() : m_pImpl(new LogRetrievebatchImpl) {}
LogRetrievebatch::~LogRetrievebatch() = default;

LogRetrievebatch& LogRetrievebatch::operator=(const LogRetrievebatch& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogRetrievebatch& LogRetrievebatch::operator=(LogRetrievebatch&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogRetrievebatch::nameImpl() const
{
    return m_pImpl->name();
}

bool LogRetrievebatch::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong LogRetrievebatch::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString LogRetrievebatch::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void LogRetrievebatch::resetImpl()
{
    m_pImpl->reset();
}

bool LogRetrievebatch::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const LogRetrievebatch*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool LogRetrievebatch::isValidImpl() const
{
    return m_pImpl->isValid();
}

LogRetrievebatch::DataSeq LogRetrievebatch::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool LogRetrievebatch::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

LogRetrievebatch::Ptr LogRetrievebatch::cloneImpl() const
{
    ImplPtr impl(static_cast<LogRetrievebatchImpl*>(m_pImpl->clone().release()));
    return Ptr(new LogRetrievebatch(std::move(impl)));
}

void LogRetrievebatch::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

LogRetrievebatch::DataSeq LogRetrievebatch::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

LogRetrievebatch::FieldsList LogRetrievebatch::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

LogRetrievebatch::FieldsList LogRetrievebatch::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

LogRetrievebatch::LogRetrievebatch(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

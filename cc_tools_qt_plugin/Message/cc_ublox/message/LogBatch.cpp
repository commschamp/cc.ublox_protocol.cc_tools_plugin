// Generated by commsdsl2tools_qt v7.0.2

#include "LogBatch.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/LogBatch.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class LogBatchImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::LogBatch,
        LogBatchImpl
    >
{
public:
    LogBatchImpl() = default;
    LogBatchImpl(const LogBatchImpl&) = default;
    LogBatchImpl(LogBatchImpl&&) = default;
    virtual ~LogBatchImpl() = default;
    LogBatchImpl& operator=(const LogBatchImpl&) = default;
    LogBatchImpl& operator=(LogBatchImpl&&) = default;
};

LogBatch::LogBatch() : m_pImpl(new LogBatchImpl) {}
LogBatch::~LogBatch() = default;

LogBatch& LogBatch::operator=(const LogBatch& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogBatch& LogBatch::operator=(LogBatch&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogBatch::nameImpl() const
{
    return m_pImpl->name();
}

bool LogBatch::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong LogBatch::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString LogBatch::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void LogBatch::resetImpl()
{
    m_pImpl->reset();
}

bool LogBatch::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const LogBatch*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool LogBatch::isValidImpl() const
{
    return m_pImpl->isValid();
}

LogBatch::DataSeq LogBatch::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool LogBatch::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

LogBatch::Ptr LogBatch::cloneImpl() const
{
    ImplPtr impl(static_cast<LogBatchImpl*>(m_pImpl->clone().release()));
    return Ptr(new LogBatch(std::move(impl)));
}

void LogBatch::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

LogBatch::DataSeq LogBatch::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

LogBatch::FieldsList LogBatch::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

LogBatch::FieldsList LogBatch::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

LogBatch::LogBatch(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

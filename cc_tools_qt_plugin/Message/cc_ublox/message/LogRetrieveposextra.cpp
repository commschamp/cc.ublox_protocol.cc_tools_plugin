// Generated by commsdsl2tools_qt v7.1.0

#include "LogRetrieveposextra.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/LogRetrieveposextra.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class LogRetrieveposextraImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::LogRetrieveposextra,
        LogRetrieveposextraImpl
    >
{
public:
    LogRetrieveposextraImpl() = default;
    LogRetrieveposextraImpl(const LogRetrieveposextraImpl&) = default;
    LogRetrieveposextraImpl(LogRetrieveposextraImpl&&) = default;
    virtual ~LogRetrieveposextraImpl() = default;
    LogRetrieveposextraImpl& operator=(const LogRetrieveposextraImpl&) = default;
    LogRetrieveposextraImpl& operator=(LogRetrieveposextraImpl&&) = default;
};

LogRetrieveposextra::LogRetrieveposextra() : m_pImpl(new LogRetrieveposextraImpl) {}
LogRetrieveposextra::~LogRetrieveposextra() = default;

LogRetrieveposextra& LogRetrieveposextra::operator=(const LogRetrieveposextra& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogRetrieveposextra& LogRetrieveposextra::operator=(LogRetrieveposextra&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogRetrieveposextra::nameImpl() const
{
    return m_pImpl->name();
}

bool LogRetrieveposextra::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong LogRetrieveposextra::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString LogRetrieveposextra::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void LogRetrieveposextra::resetImpl()
{
    m_pImpl->reset();
}

bool LogRetrieveposextra::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const LogRetrieveposextra*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool LogRetrieveposextra::isValidImpl() const
{
    return m_pImpl->isValid();
}

LogRetrieveposextra::DataSeq LogRetrieveposextra::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool LogRetrieveposextra::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

LogRetrieveposextra::Ptr LogRetrieveposextra::cloneImpl() const
{
    ImplPtr impl(static_cast<LogRetrieveposextraImpl*>(m_pImpl->clone().release()));
    return Ptr(new LogRetrieveposextra(std::move(impl)));
}

void LogRetrieveposextra::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

LogRetrieveposextra::DataSeq LogRetrieveposextra::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

LogRetrieveposextra::FieldsList LogRetrieveposextra::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

LogRetrieveposextra::FieldsList LogRetrieveposextra::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

LogRetrieveposextra::LogRetrieveposextra(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

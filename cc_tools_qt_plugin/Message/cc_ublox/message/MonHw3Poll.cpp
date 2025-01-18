// Generated by commsdsl2tools_qt v7.0.2

#include "MonHw3Poll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonHw3Poll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonHw3PollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonHw3Poll,
        MonHw3PollImpl
    >
{
public:
    MonHw3PollImpl() = default;
    MonHw3PollImpl(const MonHw3PollImpl&) = default;
    MonHw3PollImpl(MonHw3PollImpl&&) = default;
    virtual ~MonHw3PollImpl() = default;
    MonHw3PollImpl& operator=(const MonHw3PollImpl&) = default;
    MonHw3PollImpl& operator=(MonHw3PollImpl&&) = default;
};

MonHw3Poll::MonHw3Poll() : m_pImpl(new MonHw3PollImpl) {}
MonHw3Poll::~MonHw3Poll() = default;

MonHw3Poll& MonHw3Poll::operator=(const MonHw3Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonHw3Poll& MonHw3Poll::operator=(MonHw3Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonHw3Poll::nameImpl() const
{
    return m_pImpl->name();
}

bool MonHw3Poll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonHw3Poll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonHw3Poll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonHw3Poll::resetImpl()
{
    m_pImpl->reset();
}

bool MonHw3Poll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonHw3Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonHw3Poll::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonHw3Poll::DataSeq MonHw3Poll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonHw3Poll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonHw3Poll::Ptr MonHw3Poll::cloneImpl() const
{
    ImplPtr impl(static_cast<MonHw3PollImpl*>(m_pImpl->clone().release()));
    return Ptr(new MonHw3Poll(std::move(impl)));
}

void MonHw3Poll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonHw3Poll::DataSeq MonHw3Poll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonHw3Poll::FieldsList MonHw3Poll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonHw3Poll::FieldsList MonHw3Poll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonHw3Poll::MonHw3Poll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

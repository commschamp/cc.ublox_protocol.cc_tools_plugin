// Generated by commsdsl2tools_qt v7.1.0

#include "RxmAlmPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/RxmAlmPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class RxmAlmPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::RxmAlmPoll,
        RxmAlmPollImpl
    >
{
public:
    RxmAlmPollImpl() = default;
    RxmAlmPollImpl(const RxmAlmPollImpl&) = default;
    RxmAlmPollImpl(RxmAlmPollImpl&&) = default;
    virtual ~RxmAlmPollImpl() = default;
    RxmAlmPollImpl& operator=(const RxmAlmPollImpl&) = default;
    RxmAlmPollImpl& operator=(RxmAlmPollImpl&&) = default;
};

RxmAlmPoll::RxmAlmPoll() : m_pImpl(new RxmAlmPollImpl) {}
RxmAlmPoll::~RxmAlmPoll() = default;

RxmAlmPoll& RxmAlmPoll::operator=(const RxmAlmPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmAlmPoll& RxmAlmPoll::operator=(RxmAlmPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmAlmPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool RxmAlmPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong RxmAlmPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString RxmAlmPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void RxmAlmPoll::resetImpl()
{
    m_pImpl->reset();
}

bool RxmAlmPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const RxmAlmPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool RxmAlmPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

RxmAlmPoll::DataSeq RxmAlmPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool RxmAlmPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

RxmAlmPoll::Ptr RxmAlmPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<RxmAlmPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new RxmAlmPoll(std::move(impl)));
}

void RxmAlmPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

RxmAlmPoll::DataSeq RxmAlmPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

RxmAlmPoll::FieldsList RxmAlmPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

RxmAlmPoll::FieldsList RxmAlmPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

RxmAlmPoll::RxmAlmPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

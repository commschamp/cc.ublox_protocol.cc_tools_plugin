// Generated by commsdsl2tools_qt v7.1.0

#include "HnrPvtPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/HnrPvtPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class HnrPvtPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::HnrPvtPoll,
        HnrPvtPollImpl
    >
{
public:
    HnrPvtPollImpl() = default;
    HnrPvtPollImpl(const HnrPvtPollImpl&) = default;
    HnrPvtPollImpl(HnrPvtPollImpl&&) = default;
    virtual ~HnrPvtPollImpl() = default;
    HnrPvtPollImpl& operator=(const HnrPvtPollImpl&) = default;
    HnrPvtPollImpl& operator=(HnrPvtPollImpl&&) = default;
};

HnrPvtPoll::HnrPvtPoll() : m_pImpl(new HnrPvtPollImpl) {}
HnrPvtPoll::~HnrPvtPoll() = default;

HnrPvtPoll& HnrPvtPoll::operator=(const HnrPvtPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

HnrPvtPoll& HnrPvtPoll::operator=(HnrPvtPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* HnrPvtPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool HnrPvtPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong HnrPvtPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString HnrPvtPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void HnrPvtPoll::resetImpl()
{
    m_pImpl->reset();
}

bool HnrPvtPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const HnrPvtPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool HnrPvtPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

HnrPvtPoll::DataSeq HnrPvtPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool HnrPvtPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

HnrPvtPoll::Ptr HnrPvtPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<HnrPvtPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new HnrPvtPoll(std::move(impl)));
}

void HnrPvtPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

HnrPvtPoll::DataSeq HnrPvtPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

HnrPvtPoll::FieldsList HnrPvtPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

HnrPvtPoll::FieldsList HnrPvtPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

HnrPvtPoll::HnrPvtPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

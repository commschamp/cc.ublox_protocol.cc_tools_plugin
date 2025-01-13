// Generated by commsdsl2tools_qt v7.0.0

#include "MonSmgrPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonSmgrPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonSmgrPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonSmgrPoll,
        MonSmgrPollImpl
    >
{
public:
    MonSmgrPollImpl() = default;
    MonSmgrPollImpl(const MonSmgrPollImpl&) = default;
    MonSmgrPollImpl(MonSmgrPollImpl&&) = default;
    virtual ~MonSmgrPollImpl() = default;
    MonSmgrPollImpl& operator=(const MonSmgrPollImpl&) = default;
    MonSmgrPollImpl& operator=(MonSmgrPollImpl&&) = default;
};

MonSmgrPoll::MonSmgrPoll() : m_pImpl(new MonSmgrPollImpl) {}
MonSmgrPoll::~MonSmgrPoll() = default;

MonSmgrPoll& MonSmgrPoll::operator=(const MonSmgrPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonSmgrPoll& MonSmgrPoll::operator=(MonSmgrPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonSmgrPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool MonSmgrPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonSmgrPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonSmgrPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonSmgrPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonSmgrPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonSmgrPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonSmgrPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonSmgrPoll::DataSeq MonSmgrPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonSmgrPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonSmgrPoll::Ptr MonSmgrPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<MonSmgrPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new MonSmgrPoll(std::move(impl)));
}

void MonSmgrPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonSmgrPoll::DataSeq MonSmgrPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonSmgrPoll::FieldsList MonSmgrPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonSmgrPoll::FieldsList MonSmgrPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonSmgrPoll::MonSmgrPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

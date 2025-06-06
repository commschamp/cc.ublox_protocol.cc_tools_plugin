// Generated by commsdsl2tools_qt v7.1.0

#include "NavVelnedPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavVelnedPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavVelnedPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavVelnedPoll,
        NavVelnedPollImpl
    >
{
public:
    NavVelnedPollImpl() = default;
    NavVelnedPollImpl(const NavVelnedPollImpl&) = default;
    NavVelnedPollImpl(NavVelnedPollImpl&&) = default;
    virtual ~NavVelnedPollImpl() = default;
    NavVelnedPollImpl& operator=(const NavVelnedPollImpl&) = default;
    NavVelnedPollImpl& operator=(NavVelnedPollImpl&&) = default;
};

NavVelnedPoll::NavVelnedPoll() : m_pImpl(new NavVelnedPollImpl) {}
NavVelnedPoll::~NavVelnedPoll() = default;

NavVelnedPoll& NavVelnedPoll::operator=(const NavVelnedPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavVelnedPoll& NavVelnedPoll::operator=(NavVelnedPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavVelnedPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool NavVelnedPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavVelnedPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavVelnedPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavVelnedPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavVelnedPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavVelnedPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavVelnedPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavVelnedPoll::DataSeq NavVelnedPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavVelnedPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavVelnedPoll::Ptr NavVelnedPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<NavVelnedPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavVelnedPoll(std::move(impl)));
}

void NavVelnedPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavVelnedPoll::DataSeq NavVelnedPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavVelnedPoll::FieldsList NavVelnedPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavVelnedPoll::FieldsList NavVelnedPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavVelnedPoll::NavVelnedPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

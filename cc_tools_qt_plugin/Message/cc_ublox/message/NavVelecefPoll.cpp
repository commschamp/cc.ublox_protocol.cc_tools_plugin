// Generated by commsdsl2tools_qt v7.0.0

#include "NavVelecefPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavVelecefPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavVelecefPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavVelecefPoll,
        NavVelecefPollImpl
    >
{
public:
    NavVelecefPollImpl() = default;
    NavVelecefPollImpl(const NavVelecefPollImpl&) = default;
    NavVelecefPollImpl(NavVelecefPollImpl&&) = default;
    virtual ~NavVelecefPollImpl() = default;
    NavVelecefPollImpl& operator=(const NavVelecefPollImpl&) = default;
    NavVelecefPollImpl& operator=(NavVelecefPollImpl&&) = default;
};

NavVelecefPoll::NavVelecefPoll() : m_pImpl(new NavVelecefPollImpl) {}
NavVelecefPoll::~NavVelecefPoll() = default;

NavVelecefPoll& NavVelecefPoll::operator=(const NavVelecefPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavVelecefPoll& NavVelecefPoll::operator=(NavVelecefPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavVelecefPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool NavVelecefPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavVelecefPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavVelecefPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavVelecefPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavVelecefPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavVelecefPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavVelecefPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavVelecefPoll::DataSeq NavVelecefPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavVelecefPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavVelecefPoll::Ptr NavVelecefPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<NavVelecefPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavVelecefPoll(std::move(impl)));
}

void NavVelecefPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavVelecefPoll::DataSeq NavVelecefPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavVelecefPoll::FieldsList NavVelecefPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavVelecefPoll::FieldsList NavVelecefPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavVelecefPoll::NavVelecefPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

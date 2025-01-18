// Generated by commsdsl2tools_qt v7.0.2

#include "NavOrbPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavOrbPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavOrbPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavOrbPoll,
        NavOrbPollImpl
    >
{
public:
    NavOrbPollImpl() = default;
    NavOrbPollImpl(const NavOrbPollImpl&) = default;
    NavOrbPollImpl(NavOrbPollImpl&&) = default;
    virtual ~NavOrbPollImpl() = default;
    NavOrbPollImpl& operator=(const NavOrbPollImpl&) = default;
    NavOrbPollImpl& operator=(NavOrbPollImpl&&) = default;
};

NavOrbPoll::NavOrbPoll() : m_pImpl(new NavOrbPollImpl) {}
NavOrbPoll::~NavOrbPoll() = default;

NavOrbPoll& NavOrbPoll::operator=(const NavOrbPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavOrbPoll& NavOrbPoll::operator=(NavOrbPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavOrbPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool NavOrbPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavOrbPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavOrbPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavOrbPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavOrbPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavOrbPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavOrbPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavOrbPoll::DataSeq NavOrbPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavOrbPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavOrbPoll::Ptr NavOrbPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<NavOrbPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavOrbPoll(std::move(impl)));
}

void NavOrbPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavOrbPoll::DataSeq NavOrbPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavOrbPoll::FieldsList NavOrbPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavOrbPoll::FieldsList NavOrbPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavOrbPoll::NavOrbPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

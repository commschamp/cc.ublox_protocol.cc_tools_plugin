// Generated by commsdsl2tools_qt v7.0.0

#include "NavSvinPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavSvinPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavSvinPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavSvinPoll,
        NavSvinPollImpl
    >
{
public:
    NavSvinPollImpl() = default;
    NavSvinPollImpl(const NavSvinPollImpl&) = default;
    NavSvinPollImpl(NavSvinPollImpl&&) = default;
    virtual ~NavSvinPollImpl() = default;
    NavSvinPollImpl& operator=(const NavSvinPollImpl&) = default;
    NavSvinPollImpl& operator=(NavSvinPollImpl&&) = default;
};

NavSvinPoll::NavSvinPoll() : m_pImpl(new NavSvinPollImpl) {}
NavSvinPoll::~NavSvinPoll() = default;

NavSvinPoll& NavSvinPoll::operator=(const NavSvinPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSvinPoll& NavSvinPoll::operator=(NavSvinPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSvinPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool NavSvinPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavSvinPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavSvinPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavSvinPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavSvinPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavSvinPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavSvinPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavSvinPoll::DataSeq NavSvinPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavSvinPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavSvinPoll::Ptr NavSvinPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<NavSvinPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavSvinPoll(std::move(impl)));
}

void NavSvinPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavSvinPoll::DataSeq NavSvinPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavSvinPoll::FieldsList NavSvinPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavSvinPoll::FieldsList NavSvinPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavSvinPoll::NavSvinPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

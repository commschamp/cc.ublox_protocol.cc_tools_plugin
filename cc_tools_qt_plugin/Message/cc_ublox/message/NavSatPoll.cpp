// Generated by commsdsl2tools_qt v7.0.2

#include "NavSatPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavSatPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavSatPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavSatPoll,
        NavSatPollImpl
    >
{
public:
    NavSatPollImpl() = default;
    NavSatPollImpl(const NavSatPollImpl&) = default;
    NavSatPollImpl(NavSatPollImpl&&) = default;
    virtual ~NavSatPollImpl() = default;
    NavSatPollImpl& operator=(const NavSatPollImpl&) = default;
    NavSatPollImpl& operator=(NavSatPollImpl&&) = default;
};

NavSatPoll::NavSatPoll() : m_pImpl(new NavSatPollImpl) {}
NavSatPoll::~NavSatPoll() = default;

NavSatPoll& NavSatPoll::operator=(const NavSatPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSatPoll& NavSatPoll::operator=(NavSatPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSatPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool NavSatPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavSatPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavSatPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavSatPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavSatPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavSatPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavSatPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavSatPoll::DataSeq NavSatPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavSatPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavSatPoll::Ptr NavSatPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<NavSatPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavSatPoll(std::move(impl)));
}

void NavSatPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavSatPoll::DataSeq NavSatPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavSatPoll::FieldsList NavSatPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavSatPoll::FieldsList NavSatPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavSatPoll::NavSatPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

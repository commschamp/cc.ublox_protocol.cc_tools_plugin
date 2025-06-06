// Generated by commsdsl2tools_qt v7.1.0

#include "NavAttPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavAttPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavAttPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavAttPoll,
        NavAttPollImpl
    >
{
public:
    NavAttPollImpl() = default;
    NavAttPollImpl(const NavAttPollImpl&) = default;
    NavAttPollImpl(NavAttPollImpl&&) = default;
    virtual ~NavAttPollImpl() = default;
    NavAttPollImpl& operator=(const NavAttPollImpl&) = default;
    NavAttPollImpl& operator=(NavAttPollImpl&&) = default;
};

NavAttPoll::NavAttPoll() : m_pImpl(new NavAttPollImpl) {}
NavAttPoll::~NavAttPoll() = default;

NavAttPoll& NavAttPoll::operator=(const NavAttPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAttPoll& NavAttPoll::operator=(NavAttPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavAttPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool NavAttPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavAttPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavAttPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavAttPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavAttPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavAttPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavAttPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavAttPoll::DataSeq NavAttPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavAttPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavAttPoll::Ptr NavAttPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<NavAttPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavAttPoll(std::move(impl)));
}

void NavAttPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavAttPoll::DataSeq NavAttPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavAttPoll::FieldsList NavAttPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavAttPoll::FieldsList NavAttPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavAttPoll::NavAttPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

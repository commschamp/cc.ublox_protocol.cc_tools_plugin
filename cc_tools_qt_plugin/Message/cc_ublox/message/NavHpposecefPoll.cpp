// Generated by commsdsl2tools_qt v7.1.0

#include "NavHpposecefPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavHpposecefPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavHpposecefPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavHpposecefPoll,
        NavHpposecefPollImpl
    >
{
public:
    NavHpposecefPollImpl() = default;
    NavHpposecefPollImpl(const NavHpposecefPollImpl&) = default;
    NavHpposecefPollImpl(NavHpposecefPollImpl&&) = default;
    virtual ~NavHpposecefPollImpl() = default;
    NavHpposecefPollImpl& operator=(const NavHpposecefPollImpl&) = default;
    NavHpposecefPollImpl& operator=(NavHpposecefPollImpl&&) = default;
};

NavHpposecefPoll::NavHpposecefPoll() : m_pImpl(new NavHpposecefPollImpl) {}
NavHpposecefPoll::~NavHpposecefPoll() = default;

NavHpposecefPoll& NavHpposecefPoll::operator=(const NavHpposecefPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavHpposecefPoll& NavHpposecefPoll::operator=(NavHpposecefPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavHpposecefPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool NavHpposecefPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavHpposecefPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavHpposecefPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavHpposecefPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavHpposecefPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavHpposecefPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavHpposecefPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavHpposecefPoll::DataSeq NavHpposecefPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavHpposecefPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavHpposecefPoll::Ptr NavHpposecefPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<NavHpposecefPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavHpposecefPoll(std::move(impl)));
}

void NavHpposecefPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavHpposecefPoll::DataSeq NavHpposecefPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavHpposecefPoll::FieldsList NavHpposecefPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavHpposecefPoll::FieldsList NavHpposecefPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavHpposecefPoll::NavHpposecefPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

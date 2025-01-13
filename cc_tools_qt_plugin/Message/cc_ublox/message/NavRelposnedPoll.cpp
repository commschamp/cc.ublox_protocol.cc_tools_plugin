// Generated by commsdsl2tools_qt v7.0.0

#include "NavRelposnedPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavRelposnedPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavRelposnedPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavRelposnedPoll,
        NavRelposnedPollImpl
    >
{
public:
    NavRelposnedPollImpl() = default;
    NavRelposnedPollImpl(const NavRelposnedPollImpl&) = default;
    NavRelposnedPollImpl(NavRelposnedPollImpl&&) = default;
    virtual ~NavRelposnedPollImpl() = default;
    NavRelposnedPollImpl& operator=(const NavRelposnedPollImpl&) = default;
    NavRelposnedPollImpl& operator=(NavRelposnedPollImpl&&) = default;
};

NavRelposnedPoll::NavRelposnedPoll() : m_pImpl(new NavRelposnedPollImpl) {}
NavRelposnedPoll::~NavRelposnedPoll() = default;

NavRelposnedPoll& NavRelposnedPoll::operator=(const NavRelposnedPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavRelposnedPoll& NavRelposnedPoll::operator=(NavRelposnedPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavRelposnedPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool NavRelposnedPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavRelposnedPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavRelposnedPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavRelposnedPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavRelposnedPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavRelposnedPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavRelposnedPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavRelposnedPoll::DataSeq NavRelposnedPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavRelposnedPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavRelposnedPoll::Ptr NavRelposnedPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<NavRelposnedPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavRelposnedPoll(std::move(impl)));
}

void NavRelposnedPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavRelposnedPoll::DataSeq NavRelposnedPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavRelposnedPoll::FieldsList NavRelposnedPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavRelposnedPoll::FieldsList NavRelposnedPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavRelposnedPoll::NavRelposnedPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

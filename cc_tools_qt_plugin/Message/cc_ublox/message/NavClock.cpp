// Generated by commsdsl2tools_qt v7.1.0

#include "NavClock.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavClock.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavClockImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavClock,
        NavClockImpl
    >
{
public:
    NavClockImpl() = default;
    NavClockImpl(const NavClockImpl&) = default;
    NavClockImpl(NavClockImpl&&) = default;
    virtual ~NavClockImpl() = default;
    NavClockImpl& operator=(const NavClockImpl&) = default;
    NavClockImpl& operator=(NavClockImpl&&) = default;
};

NavClock::NavClock() : m_pImpl(new NavClockImpl) {}
NavClock::~NavClock() = default;

NavClock& NavClock::operator=(const NavClock& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavClock& NavClock::operator=(NavClock&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavClock::nameImpl() const
{
    return m_pImpl->name();
}

bool NavClock::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavClock::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavClock::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavClock::resetImpl()
{
    m_pImpl->reset();
}

bool NavClock::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavClock*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavClock::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavClock::DataSeq NavClock::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavClock::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavClock::Ptr NavClock::cloneImpl() const
{
    ImplPtr impl(static_cast<NavClockImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavClock(std::move(impl)));
}

void NavClock::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavClock::DataSeq NavClock::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavClock::FieldsList NavClock::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavClock::FieldsList NavClock::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavClock::NavClock(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

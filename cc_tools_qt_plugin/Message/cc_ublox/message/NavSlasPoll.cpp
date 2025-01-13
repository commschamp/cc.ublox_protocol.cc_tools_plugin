// Generated by commsdsl2tools_qt v7.0.0

#include "NavSlasPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavSlasPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavSlasPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavSlasPoll,
        NavSlasPollImpl
    >
{
public:
    NavSlasPollImpl() = default;
    NavSlasPollImpl(const NavSlasPollImpl&) = default;
    NavSlasPollImpl(NavSlasPollImpl&&) = default;
    virtual ~NavSlasPollImpl() = default;
    NavSlasPollImpl& operator=(const NavSlasPollImpl&) = default;
    NavSlasPollImpl& operator=(NavSlasPollImpl&&) = default;
};

NavSlasPoll::NavSlasPoll() : m_pImpl(new NavSlasPollImpl) {}
NavSlasPoll::~NavSlasPoll() = default;

NavSlasPoll& NavSlasPoll::operator=(const NavSlasPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSlasPoll& NavSlasPoll::operator=(NavSlasPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSlasPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool NavSlasPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavSlasPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavSlasPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavSlasPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavSlasPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavSlasPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavSlasPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavSlasPoll::DataSeq NavSlasPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavSlasPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavSlasPoll::Ptr NavSlasPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<NavSlasPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavSlasPoll(std::move(impl)));
}

void NavSlasPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavSlasPoll::DataSeq NavSlasPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavSlasPoll::FieldsList NavSlasPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavSlasPoll::FieldsList NavSlasPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavSlasPoll::NavSlasPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

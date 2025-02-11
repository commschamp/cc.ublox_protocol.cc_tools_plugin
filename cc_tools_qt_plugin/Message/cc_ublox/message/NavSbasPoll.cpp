// Generated by commsdsl2tools_qt v7.0.3

#include "NavSbasPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavSbasPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavSbasPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavSbasPoll,
        NavSbasPollImpl
    >
{
public:
    NavSbasPollImpl() = default;
    NavSbasPollImpl(const NavSbasPollImpl&) = default;
    NavSbasPollImpl(NavSbasPollImpl&&) = default;
    virtual ~NavSbasPollImpl() = default;
    NavSbasPollImpl& operator=(const NavSbasPollImpl&) = default;
    NavSbasPollImpl& operator=(NavSbasPollImpl&&) = default;
};

NavSbasPoll::NavSbasPoll() : m_pImpl(new NavSbasPollImpl) {}
NavSbasPoll::~NavSbasPoll() = default;

NavSbasPoll& NavSbasPoll::operator=(const NavSbasPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSbasPoll& NavSbasPoll::operator=(NavSbasPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSbasPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool NavSbasPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavSbasPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavSbasPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavSbasPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavSbasPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavSbasPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavSbasPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavSbasPoll::DataSeq NavSbasPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavSbasPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavSbasPoll::Ptr NavSbasPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<NavSbasPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavSbasPoll(std::move(impl)));
}

void NavSbasPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavSbasPoll::DataSeq NavSbasPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavSbasPoll::FieldsList NavSbasPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavSbasPoll::FieldsList NavSbasPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavSbasPoll::NavSbasPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

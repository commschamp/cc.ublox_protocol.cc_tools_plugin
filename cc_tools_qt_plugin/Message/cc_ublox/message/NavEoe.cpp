// Generated by commsdsl2tools_qt v7.0.3

#include "NavEoe.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavEoe.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavEoeImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavEoe,
        NavEoeImpl
    >
{
public:
    NavEoeImpl() = default;
    NavEoeImpl(const NavEoeImpl&) = default;
    NavEoeImpl(NavEoeImpl&&) = default;
    virtual ~NavEoeImpl() = default;
    NavEoeImpl& operator=(const NavEoeImpl&) = default;
    NavEoeImpl& operator=(NavEoeImpl&&) = default;
};

NavEoe::NavEoe() : m_pImpl(new NavEoeImpl) {}
NavEoe::~NavEoe() = default;

NavEoe& NavEoe::operator=(const NavEoe& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavEoe& NavEoe::operator=(NavEoe&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavEoe::nameImpl() const
{
    return m_pImpl->name();
}

bool NavEoe::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavEoe::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavEoe::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavEoe::resetImpl()
{
    m_pImpl->reset();
}

bool NavEoe::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavEoe*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavEoe::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavEoe::DataSeq NavEoe::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavEoe::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavEoe::Ptr NavEoe::cloneImpl() const
{
    ImplPtr impl(static_cast<NavEoeImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavEoe(std::move(impl)));
}

void NavEoe::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavEoe::DataSeq NavEoe::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavEoe::FieldsList NavEoe::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavEoe::FieldsList NavEoe::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavEoe::NavEoe(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

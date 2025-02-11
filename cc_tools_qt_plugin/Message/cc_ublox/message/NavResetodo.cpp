// Generated by commsdsl2tools_qt v7.0.3

#include "NavResetodo.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavResetodo.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavResetodoImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavResetodo,
        NavResetodoImpl
    >
{
public:
    NavResetodoImpl() = default;
    NavResetodoImpl(const NavResetodoImpl&) = default;
    NavResetodoImpl(NavResetodoImpl&&) = default;
    virtual ~NavResetodoImpl() = default;
    NavResetodoImpl& operator=(const NavResetodoImpl&) = default;
    NavResetodoImpl& operator=(NavResetodoImpl&&) = default;
};

NavResetodo::NavResetodo() : m_pImpl(new NavResetodoImpl) {}
NavResetodo::~NavResetodo() = default;

NavResetodo& NavResetodo::operator=(const NavResetodo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavResetodo& NavResetodo::operator=(NavResetodo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavResetodo::nameImpl() const
{
    return m_pImpl->name();
}

bool NavResetodo::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavResetodo::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavResetodo::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavResetodo::resetImpl()
{
    m_pImpl->reset();
}

bool NavResetodo::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavResetodo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavResetodo::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavResetodo::DataSeq NavResetodo::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavResetodo::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavResetodo::Ptr NavResetodo::cloneImpl() const
{
    ImplPtr impl(static_cast<NavResetodoImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavResetodo(std::move(impl)));
}

void NavResetodo::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavResetodo::DataSeq NavResetodo::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavResetodo::FieldsList NavResetodo::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavResetodo::FieldsList NavResetodo::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavResetodo::NavResetodo(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

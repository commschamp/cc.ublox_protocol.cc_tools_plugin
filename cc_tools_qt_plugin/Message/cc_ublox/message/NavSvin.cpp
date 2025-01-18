// Generated by commsdsl2tools_qt v7.0.2

#include "NavSvin.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavSvin.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavSvinImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavSvin,
        NavSvinImpl
    >
{
public:
    NavSvinImpl() = default;
    NavSvinImpl(const NavSvinImpl&) = default;
    NavSvinImpl(NavSvinImpl&&) = default;
    virtual ~NavSvinImpl() = default;
    NavSvinImpl& operator=(const NavSvinImpl&) = default;
    NavSvinImpl& operator=(NavSvinImpl&&) = default;
};

NavSvin::NavSvin() : m_pImpl(new NavSvinImpl) {}
NavSvin::~NavSvin() = default;

NavSvin& NavSvin::operator=(const NavSvin& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSvin& NavSvin::operator=(NavSvin&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSvin::nameImpl() const
{
    return m_pImpl->name();
}

bool NavSvin::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavSvin::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavSvin::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavSvin::resetImpl()
{
    m_pImpl->reset();
}

bool NavSvin::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavSvin*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavSvin::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavSvin::DataSeq NavSvin::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavSvin::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavSvin::Ptr NavSvin::cloneImpl() const
{
    ImplPtr impl(static_cast<NavSvinImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavSvin(std::move(impl)));
}

void NavSvin::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavSvin::DataSeq NavSvin::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavSvin::FieldsList NavSvin::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavSvin::FieldsList NavSvin::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavSvin::NavSvin(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

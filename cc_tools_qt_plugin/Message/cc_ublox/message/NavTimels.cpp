// Generated by commsdsl2tools_qt v7.1.0

#include "NavTimels.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavTimels.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavTimelsImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavTimels,
        NavTimelsImpl
    >
{
public:
    NavTimelsImpl() = default;
    NavTimelsImpl(const NavTimelsImpl&) = default;
    NavTimelsImpl(NavTimelsImpl&&) = default;
    virtual ~NavTimelsImpl() = default;
    NavTimelsImpl& operator=(const NavTimelsImpl&) = default;
    NavTimelsImpl& operator=(NavTimelsImpl&&) = default;
};

NavTimels::NavTimels() : m_pImpl(new NavTimelsImpl) {}
NavTimels::~NavTimels() = default;

NavTimels& NavTimels::operator=(const NavTimels& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimels& NavTimels::operator=(NavTimels&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimels::nameImpl() const
{
    return m_pImpl->name();
}

bool NavTimels::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavTimels::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavTimels::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavTimels::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimels::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavTimels*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavTimels::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavTimels::DataSeq NavTimels::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavTimels::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavTimels::Ptr NavTimels::cloneImpl() const
{
    ImplPtr impl(static_cast<NavTimelsImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavTimels(std::move(impl)));
}

void NavTimels::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavTimels::DataSeq NavTimels::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavTimels::FieldsList NavTimels::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavTimels::FieldsList NavTimels::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavTimels::NavTimels(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

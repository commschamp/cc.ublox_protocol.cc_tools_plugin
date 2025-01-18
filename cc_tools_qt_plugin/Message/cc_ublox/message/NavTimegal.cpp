// Generated by commsdsl2tools_qt v7.0.2

#include "NavTimegal.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavTimegal.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavTimegalImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavTimegal,
        NavTimegalImpl
    >
{
public:
    NavTimegalImpl() = default;
    NavTimegalImpl(const NavTimegalImpl&) = default;
    NavTimegalImpl(NavTimegalImpl&&) = default;
    virtual ~NavTimegalImpl() = default;
    NavTimegalImpl& operator=(const NavTimegalImpl&) = default;
    NavTimegalImpl& operator=(NavTimegalImpl&&) = default;
};

NavTimegal::NavTimegal() : m_pImpl(new NavTimegalImpl) {}
NavTimegal::~NavTimegal() = default;

NavTimegal& NavTimegal::operator=(const NavTimegal& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimegal& NavTimegal::operator=(NavTimegal&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimegal::nameImpl() const
{
    return m_pImpl->name();
}

bool NavTimegal::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavTimegal::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavTimegal::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavTimegal::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimegal::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavTimegal*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavTimegal::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavTimegal::DataSeq NavTimegal::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavTimegal::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavTimegal::Ptr NavTimegal::cloneImpl() const
{
    ImplPtr impl(static_cast<NavTimegalImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavTimegal(std::move(impl)));
}

void NavTimegal::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavTimegal::DataSeq NavTimegal::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavTimegal::FieldsList NavTimegal::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavTimegal::FieldsList NavTimegal::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavTimegal::NavTimegal(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

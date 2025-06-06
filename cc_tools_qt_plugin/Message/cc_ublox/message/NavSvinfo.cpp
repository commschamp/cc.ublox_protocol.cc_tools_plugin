// Generated by commsdsl2tools_qt v7.1.0

#include "NavSvinfo.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavSvinfo.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavSvinfoImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavSvinfo,
        NavSvinfoImpl
    >
{
public:
    NavSvinfoImpl() = default;
    NavSvinfoImpl(const NavSvinfoImpl&) = default;
    NavSvinfoImpl(NavSvinfoImpl&&) = default;
    virtual ~NavSvinfoImpl() = default;
    NavSvinfoImpl& operator=(const NavSvinfoImpl&) = default;
    NavSvinfoImpl& operator=(NavSvinfoImpl&&) = default;
};

NavSvinfo::NavSvinfo() : m_pImpl(new NavSvinfoImpl) {}
NavSvinfo::~NavSvinfo() = default;

NavSvinfo& NavSvinfo::operator=(const NavSvinfo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSvinfo& NavSvinfo::operator=(NavSvinfo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSvinfo::nameImpl() const
{
    return m_pImpl->name();
}

bool NavSvinfo::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavSvinfo::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavSvinfo::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavSvinfo::resetImpl()
{
    m_pImpl->reset();
}

bool NavSvinfo::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavSvinfo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavSvinfo::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavSvinfo::DataSeq NavSvinfo::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavSvinfo::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavSvinfo::Ptr NavSvinfo::cloneImpl() const
{
    ImplPtr impl(static_cast<NavSvinfoImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavSvinfo(std::move(impl)));
}

void NavSvinfo::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavSvinfo::DataSeq NavSvinfo::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavSvinfo::FieldsList NavSvinfo::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavSvinfo::FieldsList NavSvinfo::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavSvinfo::NavSvinfo(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

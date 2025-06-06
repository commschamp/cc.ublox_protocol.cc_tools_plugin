// Generated by commsdsl2tools_qt v7.1.0

#include "NavVelned.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavVelned.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavVelnedImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavVelned,
        NavVelnedImpl
    >
{
public:
    NavVelnedImpl() = default;
    NavVelnedImpl(const NavVelnedImpl&) = default;
    NavVelnedImpl(NavVelnedImpl&&) = default;
    virtual ~NavVelnedImpl() = default;
    NavVelnedImpl& operator=(const NavVelnedImpl&) = default;
    NavVelnedImpl& operator=(NavVelnedImpl&&) = default;
};

NavVelned::NavVelned() : m_pImpl(new NavVelnedImpl) {}
NavVelned::~NavVelned() = default;

NavVelned& NavVelned::operator=(const NavVelned& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavVelned& NavVelned::operator=(NavVelned&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavVelned::nameImpl() const
{
    return m_pImpl->name();
}

bool NavVelned::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavVelned::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavVelned::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavVelned::resetImpl()
{
    m_pImpl->reset();
}

bool NavVelned::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavVelned*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavVelned::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavVelned::DataSeq NavVelned::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavVelned::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavVelned::Ptr NavVelned::cloneImpl() const
{
    ImplPtr impl(static_cast<NavVelnedImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavVelned(std::move(impl)));
}

void NavVelned::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavVelned::DataSeq NavVelned::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavVelned::FieldsList NavVelned::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavVelned::FieldsList NavVelned::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavVelned::NavVelned(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

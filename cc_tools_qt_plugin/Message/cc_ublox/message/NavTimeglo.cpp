// Generated by commsdsl2tools_qt v7.1.0

#include "NavTimeglo.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavTimeglo.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavTimegloImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavTimeglo,
        NavTimegloImpl
    >
{
public:
    NavTimegloImpl() = default;
    NavTimegloImpl(const NavTimegloImpl&) = default;
    NavTimegloImpl(NavTimegloImpl&&) = default;
    virtual ~NavTimegloImpl() = default;
    NavTimegloImpl& operator=(const NavTimegloImpl&) = default;
    NavTimegloImpl& operator=(NavTimegloImpl&&) = default;
};

NavTimeglo::NavTimeglo() : m_pImpl(new NavTimegloImpl) {}
NavTimeglo::~NavTimeglo() = default;

NavTimeglo& NavTimeglo::operator=(const NavTimeglo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimeglo& NavTimeglo::operator=(NavTimeglo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimeglo::nameImpl() const
{
    return m_pImpl->name();
}

bool NavTimeglo::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavTimeglo::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavTimeglo::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavTimeglo::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimeglo::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavTimeglo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavTimeglo::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavTimeglo::DataSeq NavTimeglo::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavTimeglo::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavTimeglo::Ptr NavTimeglo::cloneImpl() const
{
    ImplPtr impl(static_cast<NavTimegloImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavTimeglo(std::move(impl)));
}

void NavTimeglo::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavTimeglo::DataSeq NavTimeglo::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavTimeglo::FieldsList NavTimeglo::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavTimeglo::FieldsList NavTimeglo::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavTimeglo::NavTimeglo(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

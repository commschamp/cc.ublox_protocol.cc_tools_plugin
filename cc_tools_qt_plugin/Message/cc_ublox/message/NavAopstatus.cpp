// Generated by commsdsl2tools_qt v7.0.0

#include "NavAopstatus.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavAopstatus.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavAopstatusImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavAopstatus,
        NavAopstatusImpl
    >
{
public:
    NavAopstatusImpl() = default;
    NavAopstatusImpl(const NavAopstatusImpl&) = default;
    NavAopstatusImpl(NavAopstatusImpl&&) = default;
    virtual ~NavAopstatusImpl() = default;
    NavAopstatusImpl& operator=(const NavAopstatusImpl&) = default;
    NavAopstatusImpl& operator=(NavAopstatusImpl&&) = default;
};

NavAopstatus::NavAopstatus() : m_pImpl(new NavAopstatusImpl) {}
NavAopstatus::~NavAopstatus() = default;

NavAopstatus& NavAopstatus::operator=(const NavAopstatus& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAopstatus& NavAopstatus::operator=(NavAopstatus&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavAopstatus::nameImpl() const
{
    return m_pImpl->name();
}

bool NavAopstatus::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavAopstatus::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavAopstatus::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavAopstatus::resetImpl()
{
    m_pImpl->reset();
}

bool NavAopstatus::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavAopstatus*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavAopstatus::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavAopstatus::DataSeq NavAopstatus::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavAopstatus::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavAopstatus::Ptr NavAopstatus::cloneImpl() const
{
    ImplPtr impl(static_cast<NavAopstatusImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavAopstatus(std::move(impl)));
}

void NavAopstatus::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavAopstatus::DataSeq NavAopstatus::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavAopstatus::FieldsList NavAopstatus::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavAopstatus::FieldsList NavAopstatus::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavAopstatus::NavAopstatus(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

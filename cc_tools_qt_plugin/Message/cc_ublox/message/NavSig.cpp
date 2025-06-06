// Generated by commsdsl2tools_qt v7.1.0

#include "NavSig.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavSig.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavSigImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavSig,
        NavSigImpl
    >
{
public:
    NavSigImpl() = default;
    NavSigImpl(const NavSigImpl&) = default;
    NavSigImpl(NavSigImpl&&) = default;
    virtual ~NavSigImpl() = default;
    NavSigImpl& operator=(const NavSigImpl&) = default;
    NavSigImpl& operator=(NavSigImpl&&) = default;
};

NavSig::NavSig() : m_pImpl(new NavSigImpl) {}
NavSig::~NavSig() = default;

NavSig& NavSig::operator=(const NavSig& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSig& NavSig::operator=(NavSig&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSig::nameImpl() const
{
    return m_pImpl->name();
}

bool NavSig::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavSig::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavSig::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavSig::resetImpl()
{
    m_pImpl->reset();
}

bool NavSig::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavSig*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavSig::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavSig::DataSeq NavSig::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavSig::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavSig::Ptr NavSig::cloneImpl() const
{
    ImplPtr impl(static_cast<NavSigImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavSig(std::move(impl)));
}

void NavSig::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavSig::DataSeq NavSig::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavSig::FieldsList NavSig::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavSig::FieldsList NavSig::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavSig::NavSig(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

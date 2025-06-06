// Generated by commsdsl2tools_qt v7.1.0

#include "NavSlas.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/NavSlas.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class NavSlasImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::NavSlas,
        NavSlasImpl
    >
{
public:
    NavSlasImpl() = default;
    NavSlasImpl(const NavSlasImpl&) = default;
    NavSlasImpl(NavSlasImpl&&) = default;
    virtual ~NavSlasImpl() = default;
    NavSlasImpl& operator=(const NavSlasImpl&) = default;
    NavSlasImpl& operator=(NavSlasImpl&&) = default;
};

NavSlas::NavSlas() : m_pImpl(new NavSlasImpl) {}
NavSlas::~NavSlas() = default;

NavSlas& NavSlas::operator=(const NavSlas& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSlas& NavSlas::operator=(NavSlas&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSlas::nameImpl() const
{
    return m_pImpl->name();
}

bool NavSlas::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong NavSlas::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString NavSlas::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void NavSlas::resetImpl()
{
    m_pImpl->reset();
}

bool NavSlas::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const NavSlas*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool NavSlas::isValidImpl() const
{
    return m_pImpl->isValid();
}

NavSlas::DataSeq NavSlas::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool NavSlas::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

NavSlas::Ptr NavSlas::cloneImpl() const
{
    ImplPtr impl(static_cast<NavSlasImpl*>(m_pImpl->clone().release()));
    return Ptr(new NavSlas(std::move(impl)));
}

void NavSlas::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

NavSlas::DataSeq NavSlas::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

NavSlas::FieldsList NavSlas::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

NavSlas::FieldsList NavSlas::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

NavSlas::NavSlas(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

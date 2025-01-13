// Generated by commsdsl2tools_qt v7.0.0

#include "MonRxr.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonRxr.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonRxrImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonRxr,
        MonRxrImpl
    >
{
public:
    MonRxrImpl() = default;
    MonRxrImpl(const MonRxrImpl&) = default;
    MonRxrImpl(MonRxrImpl&&) = default;
    virtual ~MonRxrImpl() = default;
    MonRxrImpl& operator=(const MonRxrImpl&) = default;
    MonRxrImpl& operator=(MonRxrImpl&&) = default;
};

MonRxr::MonRxr() : m_pImpl(new MonRxrImpl) {}
MonRxr::~MonRxr() = default;

MonRxr& MonRxr::operator=(const MonRxr& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonRxr& MonRxr::operator=(MonRxr&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonRxr::nameImpl() const
{
    return m_pImpl->name();
}

bool MonRxr::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonRxr::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonRxr::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonRxr::resetImpl()
{
    m_pImpl->reset();
}

bool MonRxr::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonRxr*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonRxr::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonRxr::DataSeq MonRxr::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonRxr::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonRxr::Ptr MonRxr::cloneImpl() const
{
    ImplPtr impl(static_cast<MonRxrImpl*>(m_pImpl->clone().release()));
    return Ptr(new MonRxr(std::move(impl)));
}

void MonRxr::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonRxr::DataSeq MonRxr::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonRxr::FieldsList MonRxr::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonRxr::FieldsList MonRxr::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonRxr::MonRxr(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

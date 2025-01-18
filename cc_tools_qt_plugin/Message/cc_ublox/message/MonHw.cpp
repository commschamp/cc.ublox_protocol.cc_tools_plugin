// Generated by commsdsl2tools_qt v7.0.2

#include "MonHw.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonHw.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonHwImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonHw,
        MonHwImpl
    >
{
public:
    MonHwImpl() = default;
    MonHwImpl(const MonHwImpl&) = default;
    MonHwImpl(MonHwImpl&&) = default;
    virtual ~MonHwImpl() = default;
    MonHwImpl& operator=(const MonHwImpl&) = default;
    MonHwImpl& operator=(MonHwImpl&&) = default;
};

MonHw::MonHw() : m_pImpl(new MonHwImpl) {}
MonHw::~MonHw() = default;

MonHw& MonHw::operator=(const MonHw& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonHw& MonHw::operator=(MonHw&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonHw::nameImpl() const
{
    return m_pImpl->name();
}

bool MonHw::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonHw::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonHw::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonHw::resetImpl()
{
    m_pImpl->reset();
}

bool MonHw::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonHw*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonHw::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonHw::DataSeq MonHw::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonHw::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonHw::Ptr MonHw::cloneImpl() const
{
    ImplPtr impl(static_cast<MonHwImpl*>(m_pImpl->clone().release()));
    return Ptr(new MonHw(std::move(impl)));
}

void MonHw::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonHw::DataSeq MonHw::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonHw::FieldsList MonHw::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonHw::FieldsList MonHw::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonHw::MonHw(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

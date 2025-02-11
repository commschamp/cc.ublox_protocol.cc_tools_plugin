// Generated by commsdsl2tools_qt v7.0.3

#include "MonHw2.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonHw2.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonHw2Impl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonHw2,
        MonHw2Impl
    >
{
public:
    MonHw2Impl() = default;
    MonHw2Impl(const MonHw2Impl&) = default;
    MonHw2Impl(MonHw2Impl&&) = default;
    virtual ~MonHw2Impl() = default;
    MonHw2Impl& operator=(const MonHw2Impl&) = default;
    MonHw2Impl& operator=(MonHw2Impl&&) = default;
};

MonHw2::MonHw2() : m_pImpl(new MonHw2Impl) {}
MonHw2::~MonHw2() = default;

MonHw2& MonHw2::operator=(const MonHw2& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonHw2& MonHw2::operator=(MonHw2&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonHw2::nameImpl() const
{
    return m_pImpl->name();
}

bool MonHw2::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonHw2::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonHw2::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonHw2::resetImpl()
{
    m_pImpl->reset();
}

bool MonHw2::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonHw2*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonHw2::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonHw2::DataSeq MonHw2::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonHw2::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonHw2::Ptr MonHw2::cloneImpl() const
{
    ImplPtr impl(static_cast<MonHw2Impl*>(m_pImpl->clone().release()));
    return Ptr(new MonHw2(std::move(impl)));
}

void MonHw2::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonHw2::DataSeq MonHw2::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonHw2::FieldsList MonHw2::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonHw2::FieldsList MonHw2::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonHw2::MonHw2(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

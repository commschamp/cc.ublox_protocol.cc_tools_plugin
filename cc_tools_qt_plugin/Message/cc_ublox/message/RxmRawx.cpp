// Generated by commsdsl2tools_qt v7.0.2

#include "RxmRawx.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/RxmRawx.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class RxmRawxImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::RxmRawx,
        RxmRawxImpl
    >
{
public:
    RxmRawxImpl() = default;
    RxmRawxImpl(const RxmRawxImpl&) = default;
    RxmRawxImpl(RxmRawxImpl&&) = default;
    virtual ~RxmRawxImpl() = default;
    RxmRawxImpl& operator=(const RxmRawxImpl&) = default;
    RxmRawxImpl& operator=(RxmRawxImpl&&) = default;
};

RxmRawx::RxmRawx() : m_pImpl(new RxmRawxImpl) {}
RxmRawx::~RxmRawx() = default;

RxmRawx& RxmRawx::operator=(const RxmRawx& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmRawx& RxmRawx::operator=(RxmRawx&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmRawx::nameImpl() const
{
    return m_pImpl->name();
}

bool RxmRawx::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong RxmRawx::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString RxmRawx::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void RxmRawx::resetImpl()
{
    m_pImpl->reset();
}

bool RxmRawx::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const RxmRawx*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool RxmRawx::isValidImpl() const
{
    return m_pImpl->isValid();
}

RxmRawx::DataSeq RxmRawx::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool RxmRawx::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

RxmRawx::Ptr RxmRawx::cloneImpl() const
{
    ImplPtr impl(static_cast<RxmRawxImpl*>(m_pImpl->clone().release()));
    return Ptr(new RxmRawx(std::move(impl)));
}

void RxmRawx::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

RxmRawx::DataSeq RxmRawx::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

RxmRawx::FieldsList RxmRawx::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

RxmRawx::FieldsList RxmRawx::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

RxmRawx::RxmRawx(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

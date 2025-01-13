// Generated by commsdsl2tools_qt v7.0.0

#include "MgaFlashStop.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaFlashStop.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaFlashStopImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaFlashStop,
        MgaFlashStopImpl
    >
{
public:
    MgaFlashStopImpl() = default;
    MgaFlashStopImpl(const MgaFlashStopImpl&) = default;
    MgaFlashStopImpl(MgaFlashStopImpl&&) = default;
    virtual ~MgaFlashStopImpl() = default;
    MgaFlashStopImpl& operator=(const MgaFlashStopImpl&) = default;
    MgaFlashStopImpl& operator=(MgaFlashStopImpl&&) = default;
};

MgaFlashStop::MgaFlashStop() : m_pImpl(new MgaFlashStopImpl) {}
MgaFlashStop::~MgaFlashStop() = default;

MgaFlashStop& MgaFlashStop::operator=(const MgaFlashStop& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaFlashStop& MgaFlashStop::operator=(MgaFlashStop&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaFlashStop::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaFlashStop::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaFlashStop::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaFlashStop::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaFlashStop::resetImpl()
{
    m_pImpl->reset();
}

bool MgaFlashStop::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaFlashStop*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaFlashStop::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaFlashStop::DataSeq MgaFlashStop::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaFlashStop::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaFlashStop::Ptr MgaFlashStop::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaFlashStopImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaFlashStop(std::move(impl)));
}

void MgaFlashStop::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaFlashStop::DataSeq MgaFlashStop::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaFlashStop::FieldsList MgaFlashStop::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaFlashStop::FieldsList MgaFlashStop::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaFlashStop::MgaFlashStop(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

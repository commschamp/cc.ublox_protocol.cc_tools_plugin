// Generated by commsdsl2tools_qt v7.0.2

#include "MgaBdsAlm.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaBdsAlm.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaBdsAlmImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaBdsAlm,
        MgaBdsAlmImpl
    >
{
public:
    MgaBdsAlmImpl() = default;
    MgaBdsAlmImpl(const MgaBdsAlmImpl&) = default;
    MgaBdsAlmImpl(MgaBdsAlmImpl&&) = default;
    virtual ~MgaBdsAlmImpl() = default;
    MgaBdsAlmImpl& operator=(const MgaBdsAlmImpl&) = default;
    MgaBdsAlmImpl& operator=(MgaBdsAlmImpl&&) = default;
};

MgaBdsAlm::MgaBdsAlm() : m_pImpl(new MgaBdsAlmImpl) {}
MgaBdsAlm::~MgaBdsAlm() = default;

MgaBdsAlm& MgaBdsAlm::operator=(const MgaBdsAlm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaBdsAlm& MgaBdsAlm::operator=(MgaBdsAlm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaBdsAlm::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaBdsAlm::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaBdsAlm::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaBdsAlm::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaBdsAlm::resetImpl()
{
    m_pImpl->reset();
}

bool MgaBdsAlm::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaBdsAlm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaBdsAlm::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaBdsAlm::DataSeq MgaBdsAlm::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaBdsAlm::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaBdsAlm::Ptr MgaBdsAlm::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaBdsAlmImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaBdsAlm(std::move(impl)));
}

void MgaBdsAlm::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaBdsAlm::DataSeq MgaBdsAlm::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaBdsAlm::FieldsList MgaBdsAlm::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaBdsAlm::FieldsList MgaBdsAlm::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaBdsAlm::MgaBdsAlm(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin

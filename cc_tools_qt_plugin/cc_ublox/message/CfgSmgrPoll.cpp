// Generated by commsdsl2tools_qt v6.3.0

#include "CfgSmgrPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgSmgrPoll.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class CfgSmgrPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgSmgrPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgSmgrPollImpl
    >
{
public:
    CfgSmgrPollImpl() = default;
    CfgSmgrPollImpl(const CfgSmgrPollImpl&) = delete;
    CfgSmgrPollImpl(CfgSmgrPollImpl&&) = delete;
    virtual ~CfgSmgrPollImpl() = default;
    CfgSmgrPollImpl& operator=(const CfgSmgrPollImpl&) = default;
    CfgSmgrPollImpl& operator=(CfgSmgrPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgSmgrPoll::CfgSmgrPoll() : m_pImpl(new CfgSmgrPollImpl) {}
CfgSmgrPoll::~CfgSmgrPoll() = default;

CfgSmgrPoll& CfgSmgrPoll::operator=(const CfgSmgrPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgSmgrPoll& CfgSmgrPoll::operator=(CfgSmgrPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgSmgrPoll::MsgIdParamType CfgSmgrPoll::doGetId()
{
    return ::cc_ublox::message::CfgSmgrPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgSmgrPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgSmgrPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgSmgrPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgSmgrPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgSmgrPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgSmgrPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgSmgrPoll::MsgIdParamType CfgSmgrPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgSmgrPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgSmgrPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgSmgrPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgSmgrPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgSmgrPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

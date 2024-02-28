// Generated by commsdsl2tools_qt v6.3.0

#include "CfgHnrPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgHnrPoll.h"

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

class CfgHnrPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgHnrPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgHnrPollImpl
    >
{
public:
    CfgHnrPollImpl() = default;
    CfgHnrPollImpl(const CfgHnrPollImpl&) = delete;
    CfgHnrPollImpl(CfgHnrPollImpl&&) = delete;
    virtual ~CfgHnrPollImpl() = default;
    CfgHnrPollImpl& operator=(const CfgHnrPollImpl&) = default;
    CfgHnrPollImpl& operator=(CfgHnrPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgHnrPoll::CfgHnrPoll() : m_pImpl(new CfgHnrPollImpl) {}
CfgHnrPoll::~CfgHnrPoll() = default;

CfgHnrPoll& CfgHnrPoll::operator=(const CfgHnrPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgHnrPoll& CfgHnrPoll::operator=(CfgHnrPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgHnrPoll::MsgIdParamType CfgHnrPoll::doGetId()
{
    return ::cc_ublox::message::CfgHnrPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgHnrPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgHnrPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgHnrPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgHnrPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgHnrPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgHnrPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgHnrPoll::MsgIdParamType CfgHnrPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgHnrPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgHnrPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgHnrPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgHnrPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgHnrPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
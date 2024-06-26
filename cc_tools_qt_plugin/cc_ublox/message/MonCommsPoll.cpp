// Generated by commsdsl2tools_qt v6.3.3

#include "MonCommsPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonCommsPoll.h"

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

class MonCommsPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonCommsPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonCommsPollImpl
    >
{
public:
    MonCommsPollImpl() = default;
    MonCommsPollImpl(const MonCommsPollImpl&) = delete;
    MonCommsPollImpl(MonCommsPollImpl&&) = delete;
    virtual ~MonCommsPollImpl() = default;
    MonCommsPollImpl& operator=(const MonCommsPollImpl&) = default;
    MonCommsPollImpl& operator=(MonCommsPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonCommsPoll::MonCommsPoll() : m_pImpl(new MonCommsPollImpl) {}
MonCommsPoll::~MonCommsPoll() = default;

MonCommsPoll& MonCommsPoll::operator=(const MonCommsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonCommsPoll& MonCommsPoll::operator=(MonCommsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonCommsPoll::MsgIdParamType MonCommsPoll::doGetId()
{
    return ::cc_ublox::message::MonCommsPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonCommsPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonCommsPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonCommsPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonCommsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonCommsPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonCommsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonCommsPoll::MsgIdParamType MonCommsPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonCommsPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonCommsPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonCommsPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonCommsPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonCommsPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

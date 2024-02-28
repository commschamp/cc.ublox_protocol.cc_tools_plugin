// Generated by commsdsl2tools_qt v6.3.0

#include "MonGnssPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonGnssPoll.h"

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

class MonGnssPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonGnssPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonGnssPollImpl
    >
{
public:
    MonGnssPollImpl() = default;
    MonGnssPollImpl(const MonGnssPollImpl&) = delete;
    MonGnssPollImpl(MonGnssPollImpl&&) = delete;
    virtual ~MonGnssPollImpl() = default;
    MonGnssPollImpl& operator=(const MonGnssPollImpl&) = default;
    MonGnssPollImpl& operator=(MonGnssPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonGnssPoll::MonGnssPoll() : m_pImpl(new MonGnssPollImpl) {}
MonGnssPoll::~MonGnssPoll() = default;

MonGnssPoll& MonGnssPoll::operator=(const MonGnssPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonGnssPoll& MonGnssPoll::operator=(MonGnssPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonGnssPoll::MsgIdParamType MonGnssPoll::doGetId()
{
    return ::cc_ublox::message::MonGnssPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonGnssPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonGnssPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonGnssPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonGnssPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonGnssPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonGnssPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonGnssPoll::MsgIdParamType MonGnssPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonGnssPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonGnssPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonGnssPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonGnssPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonGnssPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

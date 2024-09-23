// Generated by commsdsl2tools_qt v6.3.4

#include "LogErase.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/LogErase.h"

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

class LogEraseImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::LogErase<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        LogEraseImpl
    >
{
public:
    LogEraseImpl() = default;
    LogEraseImpl(const LogEraseImpl&) = delete;
    LogEraseImpl(LogEraseImpl&&) = delete;
    virtual ~LogEraseImpl() = default;
    LogEraseImpl& operator=(const LogEraseImpl&) = default;
    LogEraseImpl& operator=(LogEraseImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogErase::LogErase() : m_pImpl(new LogEraseImpl) {}
LogErase::~LogErase() = default;

LogErase& LogErase::operator=(const LogErase& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogErase& LogErase::operator=(LogErase&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

LogErase::MsgIdParamType LogErase::doGetId()
{
    return ::cc_ublox::message::LogErase<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* LogErase::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogErase::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogErase::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogErase::resetImpl()
{
    m_pImpl->reset();
}

bool LogErase::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const LogErase*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogErase::MsgIdParamType LogErase::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogErase::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogErase::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogErase::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogErase::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogErase::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

// Generated by commsdsl2tools_qt v6.3.4

#include "InfDebug.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/InfDebug.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_str(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::InfDebugFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Str;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_str(false));
    return props;
}

} // namespace

class InfDebugImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::InfDebug<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        InfDebugImpl
    >
{
public:
    InfDebugImpl() = default;
    InfDebugImpl(const InfDebugImpl&) = delete;
    InfDebugImpl(InfDebugImpl&&) = delete;
    virtual ~InfDebugImpl() = default;
    InfDebugImpl& operator=(const InfDebugImpl&) = default;
    InfDebugImpl& operator=(InfDebugImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

InfDebug::InfDebug() : m_pImpl(new InfDebugImpl) {}
InfDebug::~InfDebug() = default;

InfDebug& InfDebug::operator=(const InfDebug& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

InfDebug& InfDebug::operator=(InfDebug&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

InfDebug::MsgIdParamType InfDebug::doGetId()
{
    return ::cc_ublox::message::InfDebug<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* InfDebug::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& InfDebug::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void InfDebug::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void InfDebug::resetImpl()
{
    m_pImpl->reset();
}

bool InfDebug::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const InfDebug*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

InfDebug::MsgIdParamType InfDebug::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus InfDebug::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus InfDebug::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool InfDebug::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t InfDebug::lengthImpl() const
{
    return m_pImpl->length();
}

bool InfDebug::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

// Generated by commsdsl2tools_qt v6.3.3

#include "MonRxr.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonRxr.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonRxrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "awake")
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags(false));
    return props;
}

} // namespace

class MonRxrImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonRxr<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonRxrImpl
    >
{
public:
    MonRxrImpl() = default;
    MonRxrImpl(const MonRxrImpl&) = delete;
    MonRxrImpl(MonRxrImpl&&) = delete;
    virtual ~MonRxrImpl() = default;
    MonRxrImpl& operator=(const MonRxrImpl&) = default;
    MonRxrImpl& operator=(MonRxrImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonRxr::MonRxr() : m_pImpl(new MonRxrImpl) {}
MonRxr::~MonRxr() = default;

MonRxr& MonRxr::operator=(const MonRxr& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonRxr& MonRxr::operator=(MonRxr&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonRxr::MsgIdParamType MonRxr::doGetId()
{
    return ::cc_ublox::message::MonRxr<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonRxr::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonRxr::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonRxr::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonRxr::resetImpl()
{
    m_pImpl->reset();
}

bool MonRxr::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonRxr*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonRxr::MsgIdParamType MonRxr::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonRxr::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonRxr::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonRxr::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonRxr::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonRxr::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

// Generated by commsdsl2tools_qt v6.3.4

#include "AidAopU8.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GnssId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AidAopU8.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_gnssId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAopU8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GnssId;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_gnssId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAopU8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAopU8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_data(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAopU8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Data;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_gnssId(false));
    props.append(createProps_svid(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_data(false));
    return props;
}

} // namespace

class AidAopU8Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AidAopU8<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AidAopU8Impl
    >
{
public:
    AidAopU8Impl() = default;
    AidAopU8Impl(const AidAopU8Impl&) = delete;
    AidAopU8Impl(AidAopU8Impl&&) = delete;
    virtual ~AidAopU8Impl() = default;
    AidAopU8Impl& operator=(const AidAopU8Impl&) = default;
    AidAopU8Impl& operator=(AidAopU8Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAopU8::AidAopU8() : m_pImpl(new AidAopU8Impl) {}
AidAopU8::~AidAopU8() = default;

AidAopU8& AidAopU8::operator=(const AidAopU8& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAopU8& AidAopU8::operator=(AidAopU8&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AidAopU8::MsgIdParamType AidAopU8::doGetId()
{
    return ::cc_ublox::message::AidAopU8<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AidAopU8::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAopU8::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAopU8::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAopU8::resetImpl()
{
    m_pImpl->reset();
}

bool AidAopU8::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAopU8*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAopU8::MsgIdParamType AidAopU8::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAopU8::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAopU8::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAopU8::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAopU8::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAopU8::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

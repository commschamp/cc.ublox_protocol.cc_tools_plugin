// Generated by commsdsl2tools_qt v6.3.2

#include "MgaGpsAlm.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaGpsAlm.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_svHealth(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SvHealth;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_e(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::E;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_almWNa(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AlmWNa;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_toa(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Toa;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_deltaI(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DeltaI;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omegaDot(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OmegaDot;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_sqrtA(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SqrtA;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omega0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Omega0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omega(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Omega;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_m0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::M0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_af0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Af0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_af1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Af1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_svid(false));
    props.append(createProps_svHealth(false));
    props.append(createProps_e(false));
    props.append(createProps_almWNa(false));
    props.append(createProps_toa(false));
    props.append(createProps_deltaI(false));
    props.append(createProps_omegaDot(false));
    props.append(createProps_sqrtA(false));
    props.append(createProps_omega0(false));
    props.append(createProps_omega(false));
    props.append(createProps_m0(false));
    props.append(createProps_af0(false));
    props.append(createProps_af1(false));
    props.append(createProps_reserved1(false));
    return props;
}

} // namespace

class MgaGpsAlmImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaGpsAlm<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaGpsAlmImpl
    >
{
public:
    MgaGpsAlmImpl() = default;
    MgaGpsAlmImpl(const MgaGpsAlmImpl&) = delete;
    MgaGpsAlmImpl(MgaGpsAlmImpl&&) = delete;
    virtual ~MgaGpsAlmImpl() = default;
    MgaGpsAlmImpl& operator=(const MgaGpsAlmImpl&) = default;
    MgaGpsAlmImpl& operator=(MgaGpsAlmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGpsAlm::MgaGpsAlm() : m_pImpl(new MgaGpsAlmImpl) {}
MgaGpsAlm::~MgaGpsAlm() = default;

MgaGpsAlm& MgaGpsAlm::operator=(const MgaGpsAlm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGpsAlm& MgaGpsAlm::operator=(MgaGpsAlm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaGpsAlm::MsgIdParamType MgaGpsAlm::doGetId()
{
    return ::cc_ublox::message::MgaGpsAlm<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaGpsAlm::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGpsAlm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGpsAlm::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGpsAlm::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGpsAlm::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGpsAlm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGpsAlm::MsgIdParamType MgaGpsAlm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGpsAlm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGpsAlm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGpsAlm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGpsAlm::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGpsAlm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
